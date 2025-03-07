#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

// Bold Text Color
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_YELLOW "\033[1;33m"

// Reset Color
#define RESET "\033[0m"

#define DEBUG true
#define MAX_YEAR 2100
#define MIN_YEAR 2009

#include <iostream>
#include <algorithm>
#include <map>
#include <fstream>
#include <sstream>
#include <stdexcept>

struct date {
    int yyyy;
    int mm;
    int dd;
};

class BitcoinExchange {
    private:
        std::map<int, float> _data;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator = (const BitcoinExchange& other);
        ~BitcoinExchange();

        void    btc(const std::string& inputFilePath);

};

#endif
