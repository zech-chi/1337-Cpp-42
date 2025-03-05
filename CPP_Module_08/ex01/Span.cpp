#include "Span.hpp"

// default constructor
Span::Span() : _size(0), _capacity(1337) {}

// constructor
Span::Span(unsigned int N) : _size(0), _capacity(N) {}

// copy constructor
Span::Span(const Span& other) : 
    _data(other._data),
    _size(other._size),
    _capacity(other._capacity)
    {}

// copy assignement operator
Span& Span::operator = (const Span& other) {
    if (this != &other) {
        _data = other._data;
        _size = other._size;
        _capacity = other._capacity;
    }
    return (*this);
}

// destructor
Span::~Span() {}

void    Span::addNumber(int z) {
    if (_capacity == _size)
        throw SpanIsFullException();
    _data.push_back(z);
    _size++;
}

unsigned int   Span::shortestSpan() {
    if (_size < 2)
        throw SpanCanNotBeFoundException();
    std::sort(_data.begin(), _data.end());
    unsigned int _shortestSpan = _data[1] - _data[0];
    for (size_t i = 2; i < _data.size(); i++) {
        unsigned int _curSpan = _data[i] - _data[i - 1];
        if (_shortestSpan > _curSpan)
            _shortestSpan = _curSpan;
    }
    return (_shortestSpan);
}

unsigned int    Span::longestSpan() {
    if (_size < 2)
        throw SpanCanNotBeFoundException();
    std::sort(_data.begin(), _data.end());
    return (_data[_size - 1] - _data[0]);
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
    std::cout << "data         : [" << BOLD_BLUE;
    for (size_t i = 0; i < _data.size(); i++) {
        if (i != 0) std::cout << ", ";
        std::cout << _data[i]; 
    }
    std::cout << RESET << "]\n";
    std::cout << BOLD_YELLOW << "-------------------------------------------\n" << RESET;
    std::cout << RESET;
}
