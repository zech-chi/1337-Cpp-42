#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

// Bold Text Color
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_YELLOW "\033[1;33m"

// Reset Color
#define RESET "\033[0m"

template <typename T> 
class Array {
    private:
        T *_arr;
        unsigned int _size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T>& other);
        Array<T>& operator = (const Array<T>& other);
        T& operator [] (unsigned int i);
        const T& operator [] (unsigned int i) const;
        ~Array();

        unsigned int size(void) const;

        class OutOfBoundsException : public std::exception {
            public: virtual const char* what() const throw();
        };

        void display(void) const;
};


template <typename T>
Array<T>::Array() : _arr(NULL), _size(0) {
    std::cout << BOLD_YELLOW << "Array default constructor;\n" << RESET;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    std::cout << BOLD_YELLOW << "Array constructor;\n" << RESET;
    if (n == 0)
        _arr = NULL;
    else
        _arr = new T[n](); /// ????
}

template <typename T>
Array<T>::Array(const Array<T>& other) : _arr(NULL) {
    std::cout << BOLD_YELLOW << "Array copy constructor;\n" << RESET;
    *this = other;
}

// must be deep copy
template <typename T>
Array<T>& Array<T>::operator = (const Array<T>& other) {
    std::cout << BOLD_YELLOW << "Array copy assignment operator;\n" << RESET;
    if (this != &other) {
        delete [] this->_arr;
        this->_size = other._size;
        if (this->_size > 0) {
            this->_arr = new T[this->_size];
            for (unsigned int i = 0; i < this->_size; i++) {
                this->_arr[i] = other._arr[i];
            }
        } else {
            this->_arr = NULL;
        }
    }
    return (*this);
}

template <typename T>
T& Array<T>::operator [] (unsigned int i) {
    if (i >= _size)
        throw OutOfBoundsException();
    return _arr[i];
}

template <typename T>
const T& Array<T>::operator [] (unsigned int i) const {
    if (i >= _size)
        throw OutOfBoundsException();
    return _arr[i];
}

template <typename T>
Array<T>::~Array() {
    std::cout << BOLD_YELLOW << "Array destructor;\n" << RESET;
    delete [] _arr;
}

template <typename T>
unsigned int Array<T>::size() const {
    return (_size);
}


template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
    return ("Out of bound!");
}

template <typename T>
void Array<T>::display() const {
    std::cout << BOLD_BLUE;
    if (_size == 0) {
        std::cout << "[]\n" << RESET;
        return ;
    }
    std::cout << "[" << _arr[0];
    for (unsigned int i = 1; i < _size; i++) {
        std::cout << ", " << _arr[i];
    }
    std::cout << "]\n";
    std::cout << RESET;
}


#endif
