#include "RPN.hpp"

double operation(double n, double m, char op) {
    if (op == '+') return (m + n);
    if (op == '-') return (m - n);
    if (op == '*') return (m * n);
    if (n == 0) throw std::runtime_error("Error: divide by zero!\n");
    return (m / n);
}

double evalRPN(const std::string& tokens) {
    std::stack<double> st;
    std::string ops = "+-*/";

    if (tokens.empty())
        throw std::runtime_error("Error\n");

    std::istringstream iss(tokens);
    std::string token;

    while (iss >> token) {
        DEBUG && std::cout << token << "|\n";
        if (token.size() != 1)
            throw std::runtime_error("Error\n");
        char c = token[0];
        if (isdigit(c)) {
            st.push(c - '0');
        } else if (ops.find(c) != std::string::npos) {
            if (st.size() < 2)
                throw std::runtime_error("Error\n");
            double n = st.top(); st.pop();
            double m = st.top(); st.pop();
            st.push(operation(n, m, c));
        } else {
            throw std::runtime_error("Error\n");
        } 
    }

    if (st.size() != 1)
        throw std::runtime_error("Error\n");
    return (st.top());
}
