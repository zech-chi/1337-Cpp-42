#include "Form.hpp"

Form::Form() : _name("default_name"), _gradeToSign(DEFAULT_GRADE_TO_SIGN), _gradeToExecute(DEFAULT_GRADE_TO_EXEC) {
    _isSigned = false;
    std::cout << BOLD_YELLOW;
    std::cout << "Form default constructor;\n";
    std::cout << RESET;
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    _isSigned = false;
    std::cout << BOLD_YELLOW;
    std::cout << "Form constructor;\n";
    std::cout << RESET;

    if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
        throw GradeTooHighException();
    if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
        throw GradeTooLowException();
}

Form::Form(const Form& other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
    _isSigned = other._isSigned;
    std::cout << BOLD_YELLOW;
    std::cout << "Form copy constructor;\n";
    std::cout << RESET;
}

Form& Form::operator = (const Form& other) {
    std::cout << BOLD_YELLOW;
    std::cout << "Form copy assignment operator;\n";
    std::cout << RESET;
    if (this != &other) {
        /* 
            other attributes can't change them
            because they are const
        */
        _isSigned = other._isSigned;
    }
    return (*this);
}

Form::~Form() {
    std::cout << BOLD_YELLOW;
    std::cout << "Form destructor\n";
    std::cout << RESET;
}

const std::string& Form::getName() const {
    return (_name);
}

bool Form::getIsSigned() const {
    return (_isSigned);
}

int Form::getGradeToSign() const {
    return (_gradeToSign);
}

int Form::getGradeToExecute() const {
    return (_gradeToExecute);
}

std::ostream& operator << (std::ostream& out, const Form& form) {
    out << BOLD_WHITE;
    out << "Form {\n";
    out << "\tname = " << form.getName();
    out << "\n\tisSigned = ";
    if (form.getIsSigned())
        out << "true";
    else
        out << "false";
    out << "\n\tgradeToSign = " << form.getGradeToSign();
    out << "\n\tgradeToExecute = " << form.getGradeToExecute();
    out << "\n}\n";
    out << RESET;
    return (out);
}


void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade Too High!");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade Too Low!");
}
