#include "Bureaucrat.hpp"

int main() {

    // first Bureaucrat
    try {
        Bureaucrat b1("b1", 5);
        std::cout << "first Bureaucrat: ";
        std::cout << b1;

        for (int i = 0; i < 10; i++) {
            try {
                b1.incrementGrade();
            }
            catch (std::exception &e) {
                std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
            }
            std::cout << b1;
        }
    }
    catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
    }

    // second Bureaucrat
    try {
        Bureaucrat b2("b2", 145);
        std::cout << "second Bureaucrat: ";
        std::cout << b2;

        for (int i = 0; i < 10; i++) {
            try {
                b2.decrementGrade();
            }
            catch (std::exception &e) {
                std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
            }
            std::cout << b2;
        }
    }
    catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
    }

    // third Bureaucrat
    try {
        Bureaucrat b3("b3", 154);
        std::cout << "third Bureaucrat: ";
        std::cout << b3;

    } 
    catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
    }


    std::cout << "done!\n";
    return (0);
}
