#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat a("me", 1);
    ShrubberyCreationForm b("Form_A");
    RobotomyRequestForm c("Form_B");
    PresidentialPardonForm d("Form_D");
    
    a.signForm(b);
    a.executeForm(b);
    a.signForm(c);
    a.executeForm(c);
    a.signForm(d);
    a.executeForm(d);
}