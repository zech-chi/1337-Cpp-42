#include "RPN.hpp"

int main(int ac, char **av) {
    try {
        if (ac != 2)
            throw std::runtime_error("Error\n");
        std::string tokens = av[1];
        double res = evalRPN(tokens);
        std::cout << BOLD_GREEN << res << "\n" << RESET;
    } catch (std::exception &e) {
        std::cerr << BOLD_RED << e.what() << RESET;
    }
    return (0);
}
