#include "Cat.hpp"
#include "Cat.hpp"
Cat::Cat()
{
    std::cout << "Cat Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& copy)
{
    *this = copy;
}

Cat& Cat::operator=(const Cat& op)
{
    this->type = op.type;
    return (*this);
}

std::string Cat::getType() const
{
    return (this->type);
}
void Cat::makeSound() const
{
    std::cout << "The Cat make Sound" << std::endl;
}