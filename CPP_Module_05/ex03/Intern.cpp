#include "Intern.hpp"

Intern::Intern() {
    std::cout << BOLD_YELLOW;
    std::cout << "Intern default constructor;\n";
    std::cout << RESET;
}

Intern::Intern(const Intern& other) {
    (void)(other);
    std::cout << BOLD_YELLOW;
    std::cout << "Intern copy constructor;\n";
    std::cout << RESET;
}

Intern& Intern::operator = (const Intern& other) {
    (void)(other);
    std::cout << BOLD_YELLOW;
    std::cout << "Intern copy assignment operator;\n";
    std::cout << RESET;
    return (*this);
}

Intern::~Intern() {
    std::cout << BOLD_YELLOW;
    std::cout << "Intern destructor;\n";
    std::cout << RESET;
}

AForm* Intern::makeShrubberyCreationForm(const std::string& target) {
    try {
        return new ShrubberyCreationForm(target);
    } catch (const std::bad_alloc& e) {
        std::cerr << BOLD_RED;
        std::cerr << "Error: Memory allocation failed in makeShrubberyCreationForm.";
        std::cerr << RESET;
        return NULL;
    }
}

AForm* Intern::makeRobotomyRequestForm(const std::string& target) {
    try {
        return new RobotomyRequestForm(target);
    } catch (const std::bad_alloc& e) {
        std::cerr << BOLD_RED;
        std::cerr << "Error: Memory allocation failed in makeRobotomyRequestForm.";
        std::cerr << RESET;
        return NULL;
    }
}

AForm* Intern::makePresidentialPardonForm(const std::string& target) {
    try {
        return new PresidentialPardonForm(target);
    } catch (const std::bad_alloc& e) {
        std::cerr << BOLD_RED;
        std::cerr << "Error: Memory allocation failed in makePresidentialPardonForm.";
        std::cerr << RESET;
        return NULL;
    }
}

AForm *Intern::makeForm(const std::string &formName, const std::string target) {
    std::string formNames[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* (Intern::*ptrToFormCreators[3])(const std::string&) = {
        &Intern::makeShrubberyCreationForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makePresidentialPardonForm
    };

    for (int i = 0; i < 3; i++) {
        if (formNames[i] == formName) {
            std::cout << BOLD_GREEN << "Intern creates " << formName << "\n" << RESET;
            return (this->*ptrToFormCreators[i])(target);
        }
    }

    std::cerr << BOLD_RED << "Invalid form Name!\n" << RESET;
    return NULL;
}
