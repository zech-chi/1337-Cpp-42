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
#include <deque>
#include <sstream>
#include <stdexcept>
#include <exception>
#include <utility> // for pair
#include <sys/time.h>
#include <iomanip>

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
        void    sort();
        std::vector<int> sortVec(std::vector<int> items);
        std::deque<int> sortDeq(std::deque<int> items);
        // void    SortDeq();
};

size_t  Jacobsthal(size_t n);
std::vector<size_t> generateJacobsthalSequence(size_t size);

#endif
