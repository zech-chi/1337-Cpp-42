#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"
#include "string"

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

class Bureaucrat
{
    private:
        std::string _name;
        int         _grade;

    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator = (const Bureaucrat& other);
        ~Bureaucrat();

        void incrementGrade();
        void decrementGrade();

        const std::string &getName() const;
        int getGrade() const;
};

std::ostream&  operator << (std::ostream& out, const Bureaucrat& bureaucrat);

#endif