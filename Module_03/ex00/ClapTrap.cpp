#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << Name << "Constructor called" << std::endl;
    this->Name = Name;
    hit_point = 10;
    energy_point = 10;
    attack_damage = 0;
}
ClapTrap::~ClapTrap()
{
    std::cout << this->Name << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& robot)
{
    *this = robot;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& robot)
{
    this->Name = robot.Name;
    this->hit_point = robot.hit_point;
    this->energy_point = robot.energy_point;
    this->attack_damage = robot.attack_damage;
    return (*this);
}
void ClapTrap::attack(const std::string& target)
{
    if (this->energy_point > 0 || this->hit_point > 0)
    {
        this->hit_point -= this->attack_damage;
        if (this->energy_point > 0)
            this->energy_point--;
        std::cout << "ClapTrap " << this->Name << " attacks " << target << " causing " << this->attack_damage << " points of damag" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_point -= amount;
    std::cout << "ClapTrap " << this->Name << " take damage causing " << amount << " points of damag " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_point > 0 || this->hit_point > 0)
    {
        this->hit_point += amount;
        if (this->energy_point > 0)
           this->energy_point--;
        std::cout << "ClapTrap " << this->Name << " Recovered " << amount << " of hit points " << std::endl;
    }
}