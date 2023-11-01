#include "Cat.hpp"

Cat::Cat()
{
    this->brain = new Brain();
    std::cout << "Cat Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat& copy)
{
    *this = copy;
}

Cat& Cat::operator=(Cat& op)
{
    this->type = op.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "The Cat make Sound" << std::endl;
}