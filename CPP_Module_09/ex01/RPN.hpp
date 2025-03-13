#ifndef RPN_HPP
#define RPN_HPP

// Bold Text Color
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_YELLOW "\033[1;33m"

// Reset Color
#define RESET "\033[0m"

#define DEBUG false

#include<iostream>
#include<stack>
#include<exception>
#include <sstream>

double evalRPN(const std::string& tokens);

#endif
