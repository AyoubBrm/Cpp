#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

class Intern;
class AFrom;

int main()
{
    Intern someRandomIntern;
    Form *rrf = someRandomIntern.makeForm("presidential pardon", "FORM_B");
    try
    {
        Bureaucrat a("me", 1);
        a.signForm(*rrf);
        a.executeForm(*rrf);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete rrf;
}