#include "Zombie.hpp"

int main()
{
    Zombie *zombie1;
    std::string name;
    int n;
    std::cout << " create a zombie... : ENTER THE NAME : ";
    std::getline(std::cin , name);
    std::cout << " how may zombie (less then 1000 more then 0) : ENTER THE N NUMBER : ";
    std::cin >> n;
    if (!n || name == "")
    {
        n = 4;
        name = "booooo333";
    }
    zombie1 = zombieHorde(n , name);
    delete[] zombie1;
    return (0);
}