#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    std::cout << name << ": zombie in heap" << std::endl;
    Zombie *new_one;
    new_one =  new Zombie(name);
    return (new_one);
}