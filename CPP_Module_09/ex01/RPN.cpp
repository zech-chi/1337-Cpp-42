#include "RPN.hpp"

int operation(int n, int m, char op) {
    if (op == '+') return (m + n);
    if (op == '-') return (m - n);
    if (op == '*') return (m * n);
    if (n == 0) throw std::runtime_error("divide by zero!");
    return (m / n);
}

int evalRPN(const std::string& tokens) {
    std::stack<int> st;
    std::string ops = "+-*/";

    if (tokens.empty())
        throw std::runtime_error("tokens empty!");

    for (size_t i = 0; i < tokens.size(); i++) {
        char c = tokens[i];
        if (isspace(c)) continue;
        if (isdigit(c)) {
            st.push(c - '0');
        } else if (ops.find(c) != std::string::npos) {
            if (st.size() < 2)
                throw std::runtime_error("invalid tokens!");
            int n = st.top(); st.pop();
            int m = st.top(); st.pop();
            st.push(operation(n, m, c));
        } else {
            throw std::runtime_error("invalid tokens!");
        } 
    }

    if (st.size() != 1)
        throw std::runtime_error("invalid tokens!");
    return (st.top());
}
