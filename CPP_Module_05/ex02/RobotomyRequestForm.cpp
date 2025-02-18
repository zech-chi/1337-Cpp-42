#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45), _target("default_Robotomy_target") {
    std::cout << BOLD_YELLOW;
    std::cout << "RobotomyRequestForm default constructor;\n";
    std::cout << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy", 72, 45), _target(target) {
    std::cout << BOLD_YELLOW;
    std::cout << "RobotomyRequestForm constructor;\n";
    std::cout << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target) {
    std::cout << BOLD_YELLOW;
    std::cout << "RobotomyRequestForm copy constructor;\n";
    std::cout << RESET;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& other) {
    std::cout << BOLD_YELLOW;
    std::cout << "RobotomyRequestForm copy assignment operator;\n";
    std::cout << RESET;
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << BOLD_YELLOW;
    std::cout << "RobotomyRequestForm destructor;\n";
    std::cout << RESET;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    (void)executor;
}
