#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try
    {
        Bureaucrat a("ayoub", 60);
        std::cout << a << std::endl;
        Form b("Form_A", 50, 0);
        a.signForm(b);
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}