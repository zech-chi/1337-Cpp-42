#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

#define DEFAULT_GRADE_TO_SIGN 1
#define DEFAULT_GRADE_TO_EXEC 1

class AForm {
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _gradeToExecute;      

    public:
        AForm();
        AForm(const std::string &name, int gradeToSign, int gradeToExecute);
        AForm(const AForm& other);
        AForm& operator = (const AForm& other);
        ~AForm();

        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(const Bureaucrat& bureaucrat);

        class GradeTooHighException : public std::exception {
            public: virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public: virtual const char* what() const throw();
        };

        class NotSignedException : public std::exception {
            public: virtual const char* what() const throw();
        };

        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator << (std::ostream& out, const AForm& form);

#endif
