#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

// Bold Text Color
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_YELLOW "\033[1;33m"

// Reset Color
#define RESET "\033[0m"

#include <iostream>

class MutantStack {
    private:
    public:
        MutantStack();
        MutantStack(const MutantStack& other);
        MutantStack& operator = (const MutantStack& other);
        ~MutantStack();
};

#endif
