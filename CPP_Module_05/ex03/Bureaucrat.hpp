#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

// Bold Text Color
#define BOLD_BLACK "\033[1;30m"
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_YELLOW "\033[1;33m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_MAGENTA "\033[1;35m"
#define BOLD_CYAN "\033[1;36m"
#define BOLD_WHITE "\033[1;37m"

// Reset Color
#define RESET "\033[0m"

class AForm;

class Bureaucrat
{
    private:
        const std::string _name;
        int               _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator = (const Bureaucrat& other);
        ~Bureaucrat();

        void incrementGrade();
        void decrementGrade();

        const std::string &getName() const;
        int getGrade() const;

        void signForm(AForm& form);
        void executeForm(AForm const & form);

        class GradeTooHighException : public std::exception {
            public: virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public: virtual const char* what() const throw();
        };
};

std::ostream&  operator << (std::ostream& out, const Bureaucrat& bureaucrat);

#endif