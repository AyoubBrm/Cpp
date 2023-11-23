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
    try
    {
        Bureaucrat a("me", 150);
        Intern someRandomIntern;
        Form *rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        a.signForm(*rrf);
        a.executeForm(*rrf);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}