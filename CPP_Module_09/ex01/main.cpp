#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << BOLD_RED << "Error\n" << RESET;
        return (1);
    }
    std::string tokens = av[1];
    try {
        int res = evalRPN(tokens);
        std::cout << BOLD_GREEN << res << "\n" << RESET;
    } catch (std::exception &e) {
        std::cerr << BOLD_RED << "Error: " << e.what() << "\n" << RESET;
    }
    return (0);
}
