#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("ayoub", 0);
        a.increment();
        std::cout << a << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}