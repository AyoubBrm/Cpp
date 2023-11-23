#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(const Intern& copy)
{
    *this = copy;
}

Intern& Intern::operator=(const Intern& op)
{
    (void)op;
    return(*this);
}

AForm *Intern::makeForm(std::string name_form, std::string target)
{
    std::string string[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
    AForm *forms[3] = {new PresidentialPardonForm(target), new ShrubberyCreationForm(target), new RobotomyRequestForm(target)};
    for (int i = 0; i < 3; i++)
    {
        if (name_form == string[i])
        {
            std::cout << "Intern creates " << name_form << std::endl;
            return forms[i];
        }
    }
    std::cerr << "Form " << name_form << "ins't exist" << std::endl;
    return (NULL);
}