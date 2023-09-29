#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N > 999 || N < 0)
        N = 4;
    Zombie* new_one = new Zombie[N];
    if (!new_one)
        return (NULL);
    for(int i = 0; i < N ; i++)
    {
        std::cout << "[" << i + 1 << "] : ";
        new_one[i].set_name(name);
        new_one->announce();
    }
    return (new_one);
}