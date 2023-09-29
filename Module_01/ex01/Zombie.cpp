#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
    this->name = name;
}
Zombie::Zombie()
{
}
Zombie::~Zombie()
{
    std::cout << this->name << " : is destory" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}