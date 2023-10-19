#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Deafult")
{
    std::cout << "ScanTrap Deafult constructor called" << std::endl;   
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    hit_point = 100;
    energy_point = 50;
    attack_damage = 20;
    std::cout << "ScanTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScanTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& robot)
{
    *this = robot;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& robot)
{
    this->Name = robot.Name;
    this->hit_point = robot.hit_point;
    this->energy_point = robot.energy_point;
    this->attack_damage = robot.attack_damage;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy_point > 0 || this->hit_point > 0)
    {
        this->hit_point -= this->attack_damage;
        if (this->energy_point > 0)
            this->energy_point--;
        std::cout << "ScanTrap " << this->Name << " attacks " << target << " causing " << this->attack_damage << " points of damag" << std::endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount)
{
    this->hit_point -= amount;
    std::cout << "ScanTrap " << this->Name << " take damage causing " << amount << " points of damag " << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->energy_point > 0 || this->hit_point > 0)
    {
        this->hit_point += amount;
        if (this->energy_point > 0)
           this->energy_point--;
        std::cout << "ScanTrap " << this->Name << " Recovered " << amount << " of hit points " << std::endl;
    }
}
void ScavTrap::guardGate()
{
    if (this->energy_point > 0 || this->hit_point > 0)
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
    else
        std::cout << "You dont not have enough energy " << std::endl;
}
