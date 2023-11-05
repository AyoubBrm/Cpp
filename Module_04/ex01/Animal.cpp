#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
}

Animal& Animal::operator=(const Animal type)
{
    this->type = type.type;
    return(*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "The Animal make Sound" << std::endl;
}
