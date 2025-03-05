#include "Span.hpp"

// default constructor
Span::Span() : 
    _size(0),
    _capacity(1337),
    _shortestSpan(UINT_MAX),
    _min(INT_MAX),
    _max(INT_MIN) {}

// constructor
Span::Span(unsigned int N) :
    _size(0),
    _capacity(N),
    _shortestSpan(UINT_MAX),
    _min(INT_MAX),
    _max(INT_MIN) {}

// copy constructor
Span::Span(const Span& other) : 
    _data(other._data),
    _size(other._size),
    _capacity(other._capacity),
    _shortestSpan(other._shortestSpan),
    _min(other._min),
    _max(other._max) {}

// copy assignement operator
Span& Span::operator = (const Span& other) {
    if (this != &other) {
        _data = other._data;
        _size = other._size;
        _capacity = other._capacity;
        _shortestSpan = other._shortestSpan;
        _min = other._min;
        _max = other._max;
    }
    return (*this);
}

// destructor
Span::~Span() {}

// addNumber in log(n)
void    Span::addNumber(int z) {
    unsigned int diff;

    if (_capacity == _size)
        throw SpanIsFullException();
    _data[z]++; // log(n)
    _size++;

    _min = std::min(_min, z);
    _max = std::max(_max, z);

    std::map<int, int>::iterator it = _data.find(z); // log(n)
    if (it->second > 1) {
        _shortestSpan = 0;
        return ;
    }
    if (it != _data.begin()) {
        --it;
        diff = z - it->first;
        _shortestSpan = std::min(_shortestSpan, diff);
        ++it;
    }
    ++it;
    if (it != _data.end()) {
        diff = it->first - z;
        _shortestSpan = std::min(_shortestSpan, diff);
    }
}

// shortestSpan in O(1)
unsigned int   Span::shortestSpan() const {
    if (_size < 2)
        throw SpanCanNotBeFoundException();
    return (_shortestSpan);
}

// longestSpan in O(1)
unsigned int    Span::longestSpan() const {
    if (_size < 2)
        throw SpanCanNotBeFoundException();
    return (_max - _min);
}

const char* Span::SpanIsFullException::what() const throw() {
    return ("Span is Full!");
}

const char* Span::SpanCanNotBeFoundException::what() const throw() {
    return ("no span can be found. Size must be more than 1!");
}

void    Span::display() const {
    std::cout << BOLD_YELLOW << "---------------- span info ----------------\n" << RESET;
    std::cout << "size         : " << BOLD_BLUE << _size << RESET << "\n";
    std::cout << "capacity     : " << BOLD_BLUE << _capacity << RESET << "\n";
    std::cout << "min          : " << BOLD_BLUE << _min << RESET << "\n";
    std::cout << "max          : " << BOLD_BLUE << _max << RESET << "\n";
    std::cout << "shortestSpan : " << BOLD_BLUE << _shortestSpan << RESET << "\n";
    std::cout << "longestSpan  : " << BOLD_BLUE << _max - _min << RESET << "\n";
    std::cout << "data         : {\n" << BOLD_BLUE;
    for (std::map<int, int>::const_iterator it = _data.begin(); it != _data.end(); it++) {
        std::cout << "\t" << it->first << " : " << it->second << "\n";
    }
    std::cout << RESET << "}\n";
    std::cout << BOLD_YELLOW << "-------------------------------------------\n" << RESET;
    std::cout << RESET;
}

