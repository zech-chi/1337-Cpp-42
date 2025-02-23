#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    (void)(other);
}

ScalarConverter& ScalarConverter::operator = (const ScalarConverter& other) { 
    (void)(other);
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

bool  handlePseudoLiterals(const std::string& s) {
    if (s == "nan" || s == "nanf") {
        std::cout << "char: impossible\n"; 
        std::cout << "int: impossible\n"; 
        std::cout << "float: nanf\n"; 
        std::cout << "double: nan\n";
        return (true);
    }
    if (s == "+inf" || s == "+inff") {
        std::cout << "char: impossible\n"; 
        std::cout << "int: impossible\n"; 
        std::cout << "float: +inff\n"; 
        std::cout << "double: +inf\n";
        return (true);
    }
    if (s == "-inf" || s == "-inff") {
        std::cout << "char: impossible\n"; 
        std::cout << "int: impossible\n"; 
        std::cout << "float: -inff\n"; 
        std::cout << "double: -inf\n";
        return (true);
    }
    return (false);
}

void display(data& _data) {
    if (_data.overflow) {
        std::cout << "char: impossible\n"; 
        std::cout << "int: impossible\n"; 
    } else {
        if (32 <= _data._int && _data._int <= 126) {
            _data._char = static_cast<char>(_data._int);
            std::cout << "char: " << _data._char << "\n";
        }
        else
            std::cout << "char: Non displayable\n";
        std::cout << "int: " << _data._int << "\n";
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << _data._float << "f\n";
    std::cout << "double: " << std::fixed << std::setprecision(1) << _data._double << "\n";
}

bool handleChar(const std::string &s) {
    data    _data;
    _data.overflow = false;

    if (s.size() == 1 && !isdigit(s[0])) {
        _data._char = s[0];
        _data._int = static_cast<int>(_data._char);
        _data._float = static_cast<float>(_data._char);
        _data._double = static_cast<double>(_data._char);
        display(_data);
        return (true);
    }
    return (false);
}

bool handleFloat(const std::string &s) {
    data    _data;
    _data.overflow = false;
    char    *end;
    double   num = std::strtod(s.c_str(), &end);

    if (*end == 'f' && *(end + 1) == '\0') {
        _data._double = num;
        _data._float = static_cast<float>(num);
        _data._int = static_cast<int>(num);
        if (num < INT_MIN || num > INT_MAX)
            _data.overflow = true;
        display(_data);
        return (true);
    }
    return (false);
}

bool handleDouble(const std::string &s) {
    data    _data;
    _data.overflow = false;
    char    *end;
    double  num = std::strtod(s.c_str(), &end);

    if (*end == '\0') {
        _data._double = num;
        _data._float = static_cast<float>(num);
        _data._int = static_cast<int>(num);
        if (num < INT_MIN || num > INT_MAX)
            _data.overflow = true;
        display(_data);
        return (true);
    }
    return (false);
}

bool handleInt(const std::string &s) {
    data    _data;
    _data.overflow = false;
    char    *end;
    long    num = std::strtol(s.c_str(), &end, 10);

    if (*end == '\0') {
        if (errno == ERANGE || num < INT_MIN || num > INT_MAX) {
            return (false);
        }
        _data._int = static_cast<int>(num);
        _data._float = static_cast<float>(num);
        _data._double = static_cast<double>(num);
        display(_data);
        return (true);
    }
    return (false);
}


void  ScalarConverter::convert(const std::string& s) {
    if (handlePseudoLiterals(s)) return;
    if (handleChar(s)) return;
    if (handleInt(s)) return;
    if (handleFloat(s)) return;
    if (handleDouble(s)) return;
    std::cout << "char: impossible\n"; 
    std::cout << "int: impossible\n"; 
    std::cout << "float: impossible\n"; 
    std::cout << "double: impossible\n";
}


