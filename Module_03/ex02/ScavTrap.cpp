#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{

}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    hit_point = 100;
    energy_point = 50;
    attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy)
{
    *this = copy;
}

ScavTrap& ScavTrap::operator=(ScavTrap& op)
{
    this->Name = op.Name;
    this->hit_point = op.hit_point;
    this->energy_point = op.energy_point;
    this->attack_damage = op.attack_damage;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy_point > 0 || this->hit_point > 0)
    {
        this->hit_point -= this->attack_damage;
        if (this->energy_point > 0)
            this->energy_point--;
        std::cout << "ScavTrap " << this->Name << " attacks " << target << " causing " << this->attack_damage << " points of damag" << std::endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    this->hit_point -= amount;
    std::cout << "ScavTrap " << this->Name << " take damage causing " << amount << " points of damag " << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->energy_point > 0 || this->hit_point > 0)
    {
        this->hit_point += amount;
        if (this->energy_point > 0)
           this->energy_point--;
        std::cout << "ScavTrap " << this->Name << " Recovered " << amount << " of hit points " << std::endl;
    }
}
void ScavTrap::guardGate()
{
    if (this->energy_point > 0 || this->hit_point > 0)
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
    else
        std::cout << "You dont not have enough energy " << std::endl;
}
