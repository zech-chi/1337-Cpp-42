#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << BOLD_RED << "Usage: ./convert <literal>\n" << RESET;
        return (1);
    }
    std::string s = av[1];
    
    if (s.empty()) {
        std::cerr << BOLD_RED << "literal is empty!\n" << RESET;
    }

    ScalarConverter converter;

    converter.convert(s);

    std::cout << BOLD_MAGENTA;
    std::cout << "long max = " << LONG_MAX << "\n";
    std::cout << "long min = " << LONG_MIN << "\n";
    std::cout << "int max = " << INT_MAX << "\n";
    std::cout << "int min = " << INT_MIN << "\n";
    std::cout << BOLD_GREEN << "done\n" << RESET;
    return (0);
}
