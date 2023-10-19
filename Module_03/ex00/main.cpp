#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("robot_A");
    a.attack("robot_B");
    a.takeDamage(3);
    a.beRepaired(3);
}