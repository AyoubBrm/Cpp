#include "PmergeMe.hpp"
#include <iomanip>
int main(int ac, char **av)
{
    size_t i = 1;
    clock_t time;
    clock_t time_s;
    std::string str;
    std::vector<int> rest;
    std::vector<int> result;
    std::deque<int> d_rest;
    std::deque<int> d_result;
    if (ac > 1)
    {
        while (av[i])
        {
            str = av[i];
            for(unsigned int i = 0; i < str.length(); i++)
            {
                if (str[i] == '+')
                    i++;
                if (!isdigit(str[i]))
                {
                    std::cout << "Error : invalid arg \n";
                    return (0);
                }
            }
            i++;
        }
        time = clock();
        Pmergeme a(av);
        result = a.get_vector();
        std::cout << "Before :  ";
        for (i = 0; i < result.size(); i++)
        {    
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
        result = a.make_pair(rest ,1);
        time_s = clock();
        std::cout << "After :  ";
        for (i = 0; i < result.size(); i++)
            std::cout << result[i] << " ";
        std::cout << std::endl;
        std::cout << "Time to process a range of " << i << " elements with std::vector<std::vector> " << std::fixed << std::setprecision(7) << ((float)time_s - (float)time)/CLOCKS_PER_SEC  << " us" << std::endl;
        time = clock();
        Pmergemedeque b(av);
        d_result = b.get_vector();
        std::cout << "\nBefore :  ";
        for (i = 0; i < d_result.size(); i++) 
            std::cout << d_result[i] << " ";
        std::cout << std::endl;
        d_result = b.make_pair(d_rest ,1);
        time_s = clock();
        std::cout << "After :  ";
        for (i = 0; i < d_result.size(); i++)
        {    
            std::cout << d_result[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Time to process a range of " << i << " elements with std::deque<std::deque> " << std::fixed << std::setprecision(7) << ((float)time_s - (float)time)/CLOCKS_PER_SEC  << " us" << std::endl;
    }
    else
        std::cout << "Invalid arg\n";
}
