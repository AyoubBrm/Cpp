#include "Zombie.hpp"

int main ()
{
    std::string name;
    std::string name2;
    Zombie *Zombie1;
    std::cout << "Enter the name of the zombie : ";
    std::getline(std::cin , name);
    Zombie1 = newZombie(name);
    std::cout << "Enter the name of the zombie : ";
    std::getline(std::cin , name2);
    randomChump(name2);
    Zombie1->announce();
    delete(Zombie1);
}   