#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try
    {
        Bureaucrat a("ayoub", 151);
        std::cout << a << std::endl;
        a.increment();
        Form b("Form_A", 0, 59, 0);
        a.signForm(b);
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}