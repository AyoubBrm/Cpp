#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class PresidentialPardonForm : public AForm
{
    public:
        // default constructer aras l9lwa o seti sign l ->false fl constructers aras l9lwa
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm& copy);
        PresidentialPardonForm& operator=(PresidentialPardonForm& op);
        void    execute(Bureaucrat const & executor) const;
};

#endif