#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
    std::string Name;
    int hit_point;
    int energy_point;
    int attack_damage;
    public:
    ClapTrap();
    ClapTrap(std::string Name);
    ~ClapTrap();
    ClapTrap(const ClapTrap& robot);
    ClapTrap& operator=(const ClapTrap& robot);
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif