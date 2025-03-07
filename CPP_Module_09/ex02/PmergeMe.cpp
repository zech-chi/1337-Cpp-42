#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
    DEBUG && std::cout << BOLD_YELLOW << "PmergeMe default constructor;\n" << RESET;
}

PmergeMe::PmergeMe(int ac, char **av) {
    DEBUG && std::cout << BOLD_YELLOW << "PmergeMe constructor;\n" << RESET;
    for (int i = 1; i < ac; i++) {
        std::string token = av[i];
        std::istringstream  iss(token);
        int z;
        iss >> z;
        if (iss.fail() || !iss.eof() || z < 0)
             throw std::runtime_error("Error\n");
        _vBefore.push_back(z);
    }
    _vAfter = _vBefore;
}

PmergeMe::PmergeMe(const PmergeMe& other) {
    (void)(other);
    DEBUG && std::cout << BOLD_YELLOW << "PmergeMe copy constructor;\n" << RESET;
}

PmergeMe& PmergeMe::operator = (const PmergeMe& other) {
    (void)(other);
    DEBUG && std::cout << BOLD_YELLOW << "PmergeMe copy assignement;\n" << RESET;
    return (*this);
}

PmergeMe::~PmergeMe() {
    DEBUG && std::cout << BOLD_YELLOW << "PmergeMe destructor;\n" << RESET;
}

void    PmergeMe::display() const {
    std::cout << BOLD_RED << "Before: " << RESET;
    for (size_t i = 0; i < _vBefore.size(); i++)
        std::cout << _vBefore[i] << " ";
    std::cout << "\n";

    std::cout << BOLD_GREEN << "Before: " << RESET;
    for (size_t i = 0; i < _vAfter.size(); i++)
        std::cout << _vAfter[i] << " ";
    std::cout << "\n";


}
