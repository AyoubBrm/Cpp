#include "RPN.hpp"

int calculator(char *av)
{
    std::string str = av;
    std::stack<std::string> input;
    std::stringstream in(str);
    std::string a;
    char    op;
    int  fnumber;
    int  snumber;
    int  result;

    while (std::getline(in, a, ' '))
    {
        for (unsigned int i = 0 ; i < a.length(); i++)
        {
            if (!isdigit(a.at(i)) && !strchr("-*+/", a.at(i)))
            {
                std::cout << "Error : Your arg is invalid \n"; 
                return 0;
            }
        }
        if (std::atoi(a.c_str()) >= 10 || std::atoi(a.c_str()) < -9)
        {
            std::cout << "Error : input most be nmuber less then 10 bigger then -10 \n"; 
            return 0;
        }
        if (!a.empty())
        {
            input.push(a);
            if (strchr("-*+/", input.top()[0]) && input.top()[1] == '\0')
            {
                if (input.size() < 3)
                    throw "Error : invalid";
                op = input.top().at(0);
                input.pop();
                fnumber = std::atoi(input.top().c_str());
                input.pop();
                snumber = std::atoi(input.top().c_str());
                input.pop();
                if (op == '*')
                    result = snumber * fnumber;
                else if (op == '/')
                {
                    if (snumber == 0 || fnumber == 0)
                        throw "Error : you can not divide by 0";
                    result = snumber / fnumber;
                }
                else if (op == '+')
                    result = snumber + fnumber;
                else if (op == '-')
                    result = snumber - fnumber;
                input.push(std::to_string(result));
            }
        }
    }
    if (input.size() != 1)
        throw "Error : invalid";
    std::cout << input.top() << std::endl;
    return (1);
}
