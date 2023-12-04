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
        AForm *presidential_pardon(std::string target);
        AForm *shrubbery_creation(std::string target);
        AForm *robotomy_request(std::string target);
        Intern& operator=(const Intern& op);
        AForm *makeForm(std::string name_form, std::string target);
        // typedef AForm *(Intern::*hold)(std::string target);
};
#endif