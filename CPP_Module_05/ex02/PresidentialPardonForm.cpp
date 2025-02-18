#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential", 25, 5), _target("default_Presidential_target") {
    std::cout << BOLD_YELLOW;
    std::cout << "PresidentialPardonForm default constructor;\n";
    std::cout << RESET;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential", 25, 5), _target(target) {
    std::cout << BOLD_YELLOW;
    std::cout << "PresidentialPardonForm constructor;\n";
    std::cout << RESET;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), _target(other._target) {
    std::cout << BOLD_YELLOW;
    std::cout << "PresidentialPardonForm copy constructor;\n";
    std::cout << RESET;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& other) {
    std::cout << BOLD_YELLOW;
    std::cout << "PresidentialPardonForm copy assignment operator;\n";
    std::cout << RESET;
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << BOLD_YELLOW;
    std::cout << "PresidentialPardonForm destructor;\n";
    std::cout << RESET;
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned())
        throw NotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << BOLD_GREEN << _target << " has been pardoned by Zaphod Beeblebrox.\n" << RESET;
}
