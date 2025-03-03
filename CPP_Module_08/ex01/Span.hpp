#ifndef SPAN_HPP
#define SPAN_HPP

// Bold Text Color
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_YELLOW "\033[1;33m"

// Reset Color
#define RESET "\033[0m"

#include <iostream>
#include <map>
#include <algorithm>

class   Span {
    private:
        std::map<int, int>  _data;
        unsigned int        _size;
        unsigned int        _capacity;
        unsigned int        _shortestSpan;
        int                 _min;
        int                 _max;

    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator = (const Span& other);
        ~Span();

        void            addNumber(int z);
        unsigned int    shortestSpan() const;
        unsigned int    longestSpan() const;

        class SpanIsFullException : public std::exception {
            public: const char* what() const throw(); // virtual ???
        };
        class SpanCanNotBeFoundException : public std::exception {
            public: const char* what() const throw(); // virtual ???
        };

        void    display() const;
};

#endif
