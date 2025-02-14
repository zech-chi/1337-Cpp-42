#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("zcrat"), _grade(LOWEST_GRADE) {
    std::cout << BOLD_YELLOW;
    std::cout << "Bureaucrat default constructor\n";
    std::cout << RESET;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
    // I must check if grade between 1 and 150
    std::cout << BOLD_YELLOW;
    std::cout << "Bureaucrat constructor; name{" << _name << "} and grade{" << _grade << "}\n";
    std::cout << RESET;
    if (_grade < HIGHEST_GRADE)
        throw GradeTooHighException();
    if (_grade > LOWEST_GRADE)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
    std::cout << BOLD_YELLOW;
    std::cout << "Bureaucrat copy constructor constructor;\n";
    std::cout << RESET;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << BOLD_YELLOW;
    std::cout << "Bureaucrat destructor; name{" << _name << "} and grade{" << _grade << "}\n";
    std::cout << RESET;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat& other) {
    std::cout << BOLD_YELLOW;
    std::cout << "Bureaucrat copy assignment operator;\n";
    std::cout << RESET;
    if (this != &other) {
        // this->_name = other.getName(); can't change const name
        this->_grade = other.getGrade();
    }
    return (*this);
}

std::ostream&  operator << (std::ostream& out, const Bureaucrat& bureaucrat) {
    out << BOLD_WHITE;
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\n";
    out << RESET;
    return (out);
}

void    Bureaucrat::incrementGrade() {
    if (_grade == HIGHEST_GRADE)
        throw GradeTooHighException();
    _grade--;
}

void    Bureaucrat::decrementGrade() {
    if (_grade == LOWEST_GRADE)
        throw GradeTooLowException();
    _grade++;
}

const std::string &Bureaucrat::getName() const {
    return (_name);
}

int Bureaucrat::getGrade() const {
    return (_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade Too Hight!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade Too Low!");
}
