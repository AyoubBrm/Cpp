#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern& copy);
        Intern& operator=(const Intern& op);
        AForm *makeForm(std::string name_form, std::string target);
};
#endif