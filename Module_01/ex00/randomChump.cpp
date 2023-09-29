#include "Zombie.hpp"

void randomChump( std::string name )
{
    std::cout  << name << ": zombie in stack" << std::endl;
    Zombie new_one(name);
    new_one.announce();
}