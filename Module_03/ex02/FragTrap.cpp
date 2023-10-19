#include "ClapTrap.hpp"
#include "FragTrap.hpp"
FragTrap::FragTrap() : ClapTrap("Default")
{
    std::cout << "FragTrap default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    hit_point = 100;
    energy_point = 100;
    attack_damage = 30;
    std::cout <<"FragTrap Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout <<"FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& copy)
{
    *this = copy;
}

FragTrap& FragTrap::operator=(FragTrap& op)
{
    this->Name = op.Name;
    this->hit_point = op.hit_point;
    this->energy_point = op.energy_point;
    this->attack_damage = op.attack_damage;
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (this->energy_point > 0 || this->hit_point > 0)
    {
        this->hit_point -= this->attack_damage;
        if (this->energy_point > 0)
            this->energy_point--;
        std::cout << "FragTrap " << this->Name << " attacks " << target << " causing " << this->attack_damage << " points of damag" << std::endl;
    }
}

void FragTrap::takeDamage(unsigned int amount)
{
    this->hit_point -= amount;
    std::cout << "FragTrap " << this->Name << " take damage causing " << amount << " points of damag " << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->energy_point > 0 || this->hit_point > 0)
    {
        this->hit_point += amount;
        if (this->energy_point > 0)
           this->energy_point--;
        std::cout << "FragTrap " << this->Name << " Recovered " << amount << " of hit points " << std::endl;
    }
}
void FragTrap::highFivesGuys(void)
{
    if (energy_point > 0 || this->hit_point > 0)
        std::cout << "Good job give me high five" << std::endl;
}

