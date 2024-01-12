#include "span.hpp"
#include <list>
int main()
{
    try
    {  
        Span a(300);
        std::vector<int> s;
        std::vector<int> d;
        srand(time(NULL));
        for (int i = 0; i < 290; i++)
        {
            s.push_back(rand());
        }
        a.add_range(s.begin(), s.end());
        std::cout << "This is the shortestSpan :: " << a.shortestSpan() << std::endl;
        std::cout << "This is the longestSpan :: " << a.longestSpan() << std::endl;
        for (int i = 0; i < 290; i++)
            std::cout << a[i] << std::endl;
        for (int i = 0; i < 20; i++)
        {
            d.push_back(rand());
        }
        a.add_range(d.begin(), d.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}