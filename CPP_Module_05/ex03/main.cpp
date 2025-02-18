#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    std::string spliter(42, '-');
    {
        try {
            Intern someRandomIntern;
            AForm* rrf;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            if (!rrf) {
                exit(1);
            }
            std::cout << *rrf; std::cout << spliter << "\n";
            Bureaucrat Bob("Bob", 42); std::cout << spliter << "\n";
            std::cout << Bob; std::cout << spliter << "\n";
            Bob.signForm(*rrf); std::cout << spliter << "\n";
            Bob.executeForm(*rrf); std::cout << spliter << "\n";
            delete rrf;
        }
        catch (std::exception &e) {
            std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
        }
    }

    std::cout << BOLD_GREEN << "done!\n" << RESET;
    return (0);
}
