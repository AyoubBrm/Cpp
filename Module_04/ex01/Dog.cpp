#include "Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    std::cout << "Dog Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog& copy)
{
    *this = copy;
}

Dog& Dog::operator=(Dog& op)
{
    this->type = op.type;
    return (*this);
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << "The Dog make Sound" << std::endl;
}