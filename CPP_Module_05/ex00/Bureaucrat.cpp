#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    // I must check if grade between 1 and 150
    // std::cout << "Bureaucrat constructor;\n";
    std::cout << "Bureaucrat constructor; name{" << _name << "} and grade{" << _grade << "}\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
    std::cout << "Bureaucrat copy constructor constructor;\n";
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat destructor;\n";
    std::cout << "Bureaucrat constructor; name{" << _name << "} and grade{" << _grade << "}\n";
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat& other) {
    std::cout << "Bureaucrat copy assignment operator;\n";
    if (this != &other) {
        this->_name = other.getName();
        this->_grade = other.getGrade();
    }
    return (*this);
}

std::ostream&  operator << (std::ostream& out, const Bureaucrat& bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\n";
    return (out);
}

void    Bureaucrat::incrementGrade() {
    _grade--;
}

void    Bureaucrat::decrementGrade() {
    _grade++;
}

const std::string &Bureaucrat::getName() const {
    return (_name);
}

int Bureaucrat::getGrade() const {
    return (_grade);
}