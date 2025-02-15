#include "Form.hpp"

int main() {
    try {
        Form f1("f1", 1, 150);
        std::cout << f1;
    }
    catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
    }

    std::cout << BOLD_GREEN << "done!\n" << RESET;
    return (0);
}
