#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("robot_A");
    a.attack("robot_B");
    a.takeDamage(3);
    a.beRepaired(3);
    ScavTrap b("ROBOO_c");
    b.attack("ROBOT_Y");
    b.takeDamage(11);
    b.guardGate();
    b.beRepaired(5);
}