#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// int main() {
//     ShrubberyCreationForm scf1;
//     std::cout << scf1;
//     ShrubberyCreationForm scf2("scf");
//     std::cout << scf2;

//     RobotomyRequestForm rrf1;
//     std::cout << rrf1;
//     RobotomyRequestForm rrf2("rrf");
//     std::cout << rrf2;

//     PresidentialPardonForm ppf1;
//     std::cout << ppf1;
//     PresidentialPardonForm ppf2("ppf");
//     std::cout << ppf2;

//     std::cout << BOLD_GREEN << "done!\n" << RESET;
//     return (0);
// }

/*
    testing ShrubberyCreationForm
*/
/*
int main() {
    std::string spliter(42, '-');

    try {
        Bureaucrat Alice("Alice", 13); std::cout << spliter << "\n";
        Bureaucrat Bob("Bob", 150); std::cout << spliter << "\n";
        std::cout << Alice; std::cout << spliter << "\n";
        std::cout << Bob; std::cout << spliter << "\n";

        ShrubberyCreationForm alice_form("alice_form"); std::cout << spliter << "\n";
        ShrubberyCreationForm bob_form("bob_form"); std::cout << spliter << "\n";
        std::cout << alice_form; std::cout << spliter << "\n";
        std::cout << bob_form; std::cout << spliter << "\n";

        Alice.signForm(alice_form); std::cout << spliter << "\n";
        Bob.signForm(bob_form); std::cout << spliter << "\n";


        Alice.executeForm(alice_form); std::cout << spliter << "\n";
        Bob.executeForm(bob_form); std::cout << spliter << "\n";

    }
    catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
    }

    std::cout << BOLD_GREEN << "done!\n" << RESET;
    return (0);
}
*/

/*
    testing ShrubberyCreationForm
*/
/*
int main() {
    std::string spliter(42, '-');

    try {
        Bureaucrat Alice("Alice", 137); std::cout << spliter << "\n";
        Bureaucrat Bob("Bob", 42); std::cout << spliter << "\n";
        std::cout << Alice; std::cout << spliter << "\n";
        std::cout << Bob; std::cout << spliter << "\n";

        RobotomyRequestForm alice_form("alice_form"); std::cout << spliter << "\n";
        RobotomyRequestForm bob_form("bob_form"); std::cout << spliter << "\n";
        std::cout << alice_form; std::cout << spliter << "\n";
        std::cout << bob_form; std::cout << spliter << "\n";

        Alice.signForm(alice_form); std::cout << spliter << "\n";
        Bob.signForm(bob_form); std::cout << spliter << "\n";


        Alice.executeForm(alice_form); std::cout << spliter << "\n";
        Bob.executeForm(bob_form); std::cout << spliter << "\n";

    }
    catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
    }

    std::cout << BOLD_GREEN << "done!\n" << RESET;
    return (0);
}
*/

/*
    testing ShrubberyCreationForm
*/
int main() {
    std::string spliter(42, '-');

    try {
        Bureaucrat Alice("Alice", 1); std::cout << spliter << "\n";
        Bureaucrat Bob("Bob", 7); std::cout << spliter << "\n";
        std::cout << Alice; std::cout << spliter << "\n";
        std::cout << Bob; std::cout << spliter << "\n";

        PresidentialPardonForm alice_form("alice_form"); std::cout << spliter << "\n";
        PresidentialPardonForm bob_form("bob_form"); std::cout << spliter << "\n";
        std::cout << alice_form; std::cout << spliter << "\n";
        std::cout << bob_form; std::cout << spliter << "\n";

        Alice.signForm(alice_form); std::cout << spliter << "\n";
        Bob.signForm(bob_form); std::cout << spliter << "\n";


        Alice.executeForm(alice_form); std::cout << spliter << "\n";
        Bob.executeForm(bob_form); std::cout << spliter << "\n";

    }
    catch (std::exception &e) {
        std::cerr << BOLD_RED << "Exception: " << e.what() << RESET << "\n";
    }

    std::cout << BOLD_GREEN << "done!\n" << RESET;
    return (0);
}
