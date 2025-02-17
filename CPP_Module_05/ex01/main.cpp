#include "Form.hpp"

// int main() {
//     try {
//         Form f1("f1", 1, 150);
//         std::cout << f1;
//     }
//     catch (std::exception &e) {
//         std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
//     }

//     std::cout << BOLD_GREEN << "done!\n" << RESET;
//     return (0);
// }

int main() {
    std::string spliter(42, '-');

    try {
        Bureaucrat b1("b1", 17);
        std::cout << spliter << "\n";
        Form f1("f1", 20, 25);
        std::cout << spliter << "\n";
        std::cout << b1;
        std::cout << spliter << "\n";
        std::cout << f1;
        std::cout << spliter << "\n";
        b1.signForm(f1);
        std::cout << spliter << "\n";

        
        std::cout << "\n\n\n";

        Bureaucrat b2("b2", 117);
        std::cout << spliter << "\n";
        Form f2("f2", 40, 45);
        std::cout << spliter << "\n";
        std::cout << b2;
        std::cout << spliter << "\n";
        std::cout << f2;
        std::cout << spliter << "\n";
        b2.signForm(f2);
        std::cout << spliter << "\n";
    }
    catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
    }

    std::cout << BOLD_GREEN << "done!\n" << RESET;
    return (0);
}
