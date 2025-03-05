#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

// Bold Text Color
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_YELLOW "\033[1;33m"

// Reset Color
#define RESET "\033[0m"

// debug  mod
#define DEBUG false

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() : std::stack<T>() {
            DEBUG && std::cout << BOLD_YELLOW << "MutantStack constructor;\n" << RESET;
        }

        MutantStack(const MutantStack& other) : std::stack<T>(other) {
            DEBUG && std::cout << BOLD_YELLOW << "MutantStack copy constructor;\n" << RESET;
        }

        MutantStack& operator = (const MutantStack& other) {
            DEBUG && std::cout << BOLD_YELLOW << "MutantStack copy assignement;\n" << RESET;
            if (this != &other) {
                std::stack<T>::operator=(other);
            }
            return (*this);
        }

        ~MutantStack() {
            DEBUG && std::cout << BOLD_YELLOW << "MutantStack destructor;\n" << RESET;
        }

        /*
            The underlying container that stores the elements. 
            By default, it is std::deque<T> for std::stack<T>
            By default, it is std::vector<T> for std::priority_queue
        */
        // typedef typename std::stack<T>::container_type Container;
        typedef typename std::deque<T> Container;
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;

        iterator          begin() {
            return (this->c.begin());
        }

        const_iterator    begin() const {
            return (this->c.begin());
        }

        iterator          end() {
            return (this->c.end());
        }

        const_iterator    end() const {
            return (this->c.end());
        }
};

#endif
