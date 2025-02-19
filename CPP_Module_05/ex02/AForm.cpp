#include "AForm.hpp"

AForm::AForm() : _name("default_name"), _gradeToSign(DEFAULT_GRADE_TO_SIGN), _gradeToExecute(DEFAULT_GRADE_TO_EXEC) {
    _isSigned = false;
    std::cout << BOLD_YELLOW;
    std::cout << "AForm default constructor;\n";
    std::cout << RESET;
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    _isSigned = false;
    std::cout << BOLD_YELLOW;
    std::cout << "AForm constructor;\n";
    std::cout << RESET;

    if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
        throw GradeTooHighException();
    if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
    _isSigned = other._isSigned;
    std::cout << BOLD_YELLOW;
    std::cout << "AForm copy constructor;\n";
    std::cout << RESET;
}

AForm& AForm::operator = (const AForm& other) {
    std::cout << BOLD_YELLOW;
    std::cout << "AForm copy assignment operator;\n";
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

AForm::~AForm() {
    std::cout << BOLD_YELLOW;
    std::cout << "AForm destructor\n";
    std::cout << RESET;
}

const std::string& AForm::getName() const {
    return (_name);
}

bool AForm::getIsSigned() const {
    return (_isSigned);
}

int AForm::getGradeToSign() const {
    return (_gradeToSign);
}

int AForm::getGradeToExecute() const {
    return (_gradeToExecute);
}

std::ostream& operator << (std::ostream& out, const AForm& form) {
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


void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return ("Grade Too High!");
}

const char* AForm::GradeTooLowException::what() const throw() {
    return ("Grade Too Low!");
}

const char* AForm::NotSignedException::what() const throw() {
    return ("Form not Signed!");
}
