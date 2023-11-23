#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat& copy);
        Bureaucrat& operator=(Bureaucrat& op);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const ;
        Bureaucrat& increment();
        Bureaucrat& decrement();
        void signForm(AForm& sign);
        void executeForm(AForm const & form);
        class GradeTooHighException;
        class GradeTooLowException;
};

class Bureaucrat::GradeTooHighException : public std::exception
{
    const char* what() const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception
{
   const char* what() const throw();
};

std::ostream& operator<<(std::ostream& COUT,  Bureaucrat& op);
#endif