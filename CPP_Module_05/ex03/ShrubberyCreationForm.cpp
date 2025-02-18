#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137), _target("default_Shrubbery_target") {
    std::cout << BOLD_YELLOW;
    std::cout << "ShrubberyCreationForm default constructor;\n";
    std::cout << RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery", 145, 137), _target(target) {
    std::cout << BOLD_YELLOW;
    std::cout << "ShrubberyCreationForm constructor;\n";
    std::cout << RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target) {
    std::cout << BOLD_YELLOW;
    std::cout << "ShrubberyCreationForm copy constructor;\n";
    std::cout << RESET;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& other) {
    std::cout << BOLD_YELLOW;
    std::cout << "ShrubberyCreationForm copy assignment operator;\n";
    std::cout << RESET;
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << BOLD_YELLOW;
    std::cout << "ShrubberyCreationForm destructor;\n";
    std::cout << RESET;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned())
        throw NotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::ofstream file((_target + "_shrubbery").c_str());
    if (file.is_open()) {
        file << "       _-_\n";
        file << "    /~~   ~~\\\n";
        file << " /~~         ~~\\\n";
        file << "{     1337     }\n";
        file << " \\  _-     -_  /\n";
        file << "   ~  \\\\ //  ~\n";
        file << "_- -   | | _- _\n";
        file << "  _ -  | |   -_\n";
        file << "      // \\\\\n";
        file.close();
    } else {
        std::cerr << "Error: Could not open file.\n";
    }
}
