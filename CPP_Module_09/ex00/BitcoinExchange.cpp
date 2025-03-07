#include "BitcoinExchange.hpp"

static int isLeapYear(int yyyy) {
    if (yyyy % 4 != 0) return (false);
    if (yyyy % 400 == 0) return (true);
    if (yyyy % 100 == 0) return (false);
    return (true);
}

static int daysSinceEpoch(const date& d) {
    int days = 0;
    for (int year = 1971; year < d.yyyy; year++) {
        days += 365 + isLeapYear(year);
    }
    for (int month = 1; month < d.mm; month++) {
        switch (month) {
            case (1): days += 31; break;
            case (2): days += 28 + isLeapYear(d.yyyy); break;
            case (3): days += 31; break;
            case (4): days += 30; break;
            case (5): days += 31; break;
            case (6): days += 30; break;
            case (7): days += 31; break;
            case (8): days += 31; break;
            case (9): days += 30; break;
            case (10): days += 31; break;
            case (11): days += 30; break;
            case (12): days += 31; break;
        }
    }
    days += d.dd;
    return (days);
}

static  double stringToFloat(const std::string& str) {
    std::istringstream  iss(str);
    float               val;

    iss >> val;
    if (iss.fail()) {
        std::cerr << BOLD_RED << "stringToFloat failed!\n" << RESET;
        return (0.0f);
    }
    return (val);
}

static  int stringToInt(const std::string& str) {
    std::istringstream  iss(str);
    int                 val;

    iss >> val;
    if (iss.fail()) {
        std::cerr << BOLD_RED << "stringToInt failed!\n" << RESET;
        return (0);
    }
    return (val);
}

static  date stringToDate(const std::string& str, const std::string& line) {
    date    _date;

    //                     0123456789
    // check valid format (yyyy-mm-dd)
    for (size_t i = 0; i < 10; i++) {
        if (i == 4 || i == 7) {
            if (str[i] != '-')
                throw std::runtime_error("Error: bad date (valid date = yyyy-mm-dd) => " + line + "\n");
        } else {
            if (!isdigit(str[i]))
                throw std::runtime_error("Error: bad date (valid date = yyyy-mm-dd) => " + line + "\n");
        }
    }

    _date.yyyy = stringToInt(str.substr(0, 4));
    _date.mm = stringToInt(str.substr(5, 2));
    _date.dd = stringToInt(str.substr(8, 2));

    if (MIN_YEAR > _date.yyyy || MAX_YEAR < _date.yyyy)
        throw std::runtime_error("Error: bad date (year must be between MIN_YEAR && MAX_YEAR) => " + line + "\n");
    if (1 > _date.mm || 12 < _date.mm)
        throw std::runtime_error("Error: bad date (month must be between 1 && 12) => " + line + "\n");
    if (1 > _date.dd || 31 < _date.dd)    
        throw std::runtime_error("Error: bad date (day must be between 1 && 31) => " + line + "\n");
    if ((_date.mm == 4 || _date.mm == 6 || _date.mm == 9 || _date.mm == 11) && _date.dd == 31) 
        throw std::runtime_error("Error: bad date (day for month 4, 6, 9 and 11 must be between 1 && 30) => " + line + "\n");
    if (_date.mm == 2) {
        if (_date.dd > 29)
            throw std::runtime_error("Error: bad date (day for month 2 must be between 1 && 29) => " + line + "\n");
        if (_date.dd == 29 && !isLeapYear(_date.yyyy))
            throw std::runtime_error("Error: bad date (day for month 2 must be between 1 && 28. not leap year!) => " + line + "\n");
    }

    return (_date);
}

BitcoinExchange::BitcoinExchange() {
    std::string line;
    int         key;
    float       value;
    bool        first_line = true;

    DEBUG && std::cout << BOLD_YELLOW << "BitcoinExchange default constructor;\n" << RESET;
    std::ifstream data("data.csv");
    if (!data)
        throw std::runtime_error("Error: could not open data.csv file!\n");
    DEBUG && std::cout << BOLD_GREEN << "data.csv file opened successfully!\n" << RESET;

    while (std::getline(data, line)) {
        if (first_line) {
            first_line = false;
            continue;
        }

        // {
        //     std::cout << "<" << line << ">\n";
        // }
        std::string date = line.substr(0, 10); key = daysSinceEpoch(stringToDate(date, line));
        std::string exchange_rate = line.substr(11); value = stringToFloat(exchange_rate);
        _data[key] = value;
        // {
        //     std::cout << BOLD_BLUE;
        //     std::cout << "key   = " << key << "\n";
        //     std::cout << "value = " << value << "\n";
        //     std::cout << RESET;
        // }
    }
    DEBUG && std::cout << BOLD_GREEN << "data.csv file processed successfully!\n" << RESET;
    // {
    //     for (std::map<int, float>::iterator it = _data.begin(); it != _data.end(); it++) {
    //         std::cout << "(" << it->first << ": " << it->second << "), ";
    //     }
    //     std::cout << "\n";
    // } 
    data.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    (void)(other);
    DEBUG && std::cout << BOLD_YELLOW << "BitcoinExchange copy constructor;\n" << RESET;
}

BitcoinExchange& BitcoinExchange::operator = (const BitcoinExchange& other) {
    (void)(other);
    DEBUG && std::cout << BOLD_YELLOW << "BitcoinExchange copy assignement;\n" << RESET;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {
    DEBUG && std::cout << BOLD_YELLOW << "BitcoinExchange destructor;\n" << RESET;
}

void    BitcoinExchange::btc(const std::string& inputFilePath) {
    std::string line;
    int         key;
    float       value;
    bool        first_line = true;

    std::ifstream inputFile(inputFilePath);
    if (!inputFile)
        throw std::runtime_error("Error: could not open " + inputFilePath + " file!\n");
    DEBUG && std::cout << BOLD_GREEN << "data.csv file opened successfully!\n" << RESET;

    while (std::getline(inputFile, line)) {

        try {
            if (first_line) {
                first_line = false;
                if (line != "date | value")
                    throw std::runtime_error("Error: bad input => " + line + "\n");
                continue;
            }

            size_t  pos = line.find('|');
            if (pos == std::string::npos || pos != 11)
                throw std::runtime_error("Error: bad input => " + line + "\n");
                
            std::string date = line.substr(0, pos - 1);
            std::string price = line.substr(pos + 2);

            key = daysSinceEpoch(stringToDate(date, line));
            value = stringToFloat(price);

            std::map<int, float>::iterator it = _data.lower_bound(key);
            if (it != _data.end()) {
                std::cout << BOLD_GREEN;
                std::cout << date << " => " << price << " = " << value * it->second << "\n";
                std::cout << RESET;
            }

        } catch (std::exception &e) {
            std::cout << BOLD_RED << e.what() << RESET;
        }
    }
    inputFile.close();
}
