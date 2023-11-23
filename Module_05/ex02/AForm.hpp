#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool sign;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        AForm(std::string name, bool sign, const int grade_sign_form, const int grade_execute_form);
        AForm(std::string name, const int grade_sign_form, const int grade_execute_form);
        AForm(AForm& copy);
        ~AForm();
        AForm& operator=(AForm& op);
        std::string get_name() const;
        int get_bool() const;
        int get_grade_to_sign() const;
        int get_grade_to_execute() const;
        bool beSigned(Bureaucrat& me);
        class GradeTooHighException;
        class GradeTooLowException;
        virtual void execute(Bureaucrat const & executor) const = 0;
};

class AForm::GradeTooHighException : public std::exception
{
    const char *what() const throw();
};

class AForm::GradeTooLowException : public std::exception
{
    const char *what() const throw();
};

std::ostream& operator<<(std::ostream & COUT, AForm& op);

#endif