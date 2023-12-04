#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool sign;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        Form();
        Form(std::string name, bool sign, const int grade_sign_form, const int grade_execute_form);
        Form(Form& copy);
        ~Form();
        Form& operator=(Form& op);
        std::string get_name();
        int get_bool();
        int get_grade_to_sign();
        int get_grade_to_execute();
        bool beSigned(Bureaucrat& me);
        class GradeTooHighException;
        class GradeTooLowException;
};

class Form::GradeTooHighException : public std::exception
{
    const char *what() const throw();
};

class Form::GradeTooLowException : public std::exception
{
    const char *what() const throw();
};

std::ostream& operator<<(std::ostream & COUT, Form& op);

#endif