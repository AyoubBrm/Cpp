#include "RPN.hpp"

int main (int ac, char **av)
{
    if (ac == 2)
    {
        try
        {
            if (calculator(av[1]) == 0)
                return(0);
        }
        catch(const char *e)
        {
            std::cout << e << std::endl;
        }
    }
    else
        std::cout << "Error : invalid \n";
}