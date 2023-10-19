#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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
    FragTrap c;
    // c.attack("ROBOO_T");
    // c.takeDamage(50);
    // c.beRepaired(15);
    // c.highFivesGuys();
}