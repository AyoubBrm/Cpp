#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;
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
        std::string getName();
        int getGrade();
        Bureaucrat& increment();
        Bureaucrat& decrement();
        void signForm(Form& sign);
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