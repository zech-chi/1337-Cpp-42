#ifndef EASYFIND_HPP
#define EASYFIND_HPP

// Bold Text Color
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_YELLOW "\033[1;33m"

// Reset Color
#define RESET "\033[0m"

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <deque>
#include <list>

class NotFoundException : public std::exception {
    public : const char * what() const throw();
};

template <typename T> typename T::const_iterator easyfind(const T &container, int z) {
    typename T::const_iterator it = std::find(container.begin(), container.end(), z);
    if (it == container.end())
        throw NotFoundException();
    return (it); 
}

#endif
