#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern &Intern::operator=(const Intern &op)
{
    (void)op;
    return (*this);
}

AForm *Intern::presidential_pardon(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::shrubbery_creation(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::robotomy_request(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm *Intern::makeForm(std::string name_form, std::string target)
{
    std::string string[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
    AForm *(Intern::*hold[3])(std::string target) = {&Intern::presidential_pardon, &Intern::shrubbery_creation, &Intern::robotomy_request} ;
    for (int i = 0; i < 3; i++)
    {
        {
            if (name_form == string[i])
            {
                std::cout << "Intern creates " << name_form << std::endl;
                return ((this->*hold[i])(target));
            }
        }
    }
    std::cerr << "Form " << name_form << "ins't exist" << std::endl;
    return (NULL);
}