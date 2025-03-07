#ifndef PMERGEME_HPP
#define PMERGEME_HPP

// Bold Text Color
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_YELLOW "\033[1;33m"

// Reset Color
#define RESET "\033[0m"

#define DEBUG true

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <exception>

class   PmergeMe {
    private:
        std::vector<int> _vBefore;
        std::vector<int> _vAfter;

    public:
        PmergeMe();
        PmergeMe(int ac, char **av);
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator = (const PmergeMe& other);
        ~PmergeMe();

        void    display() const;
};

#endif
