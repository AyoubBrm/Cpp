#include "Animal.hpp"

A_Animal::A_Animal() : type("Animal")
{
    std::cout << "Animal Constructor called" << std::endl;
};

A_Animal::~A_Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
};
A_Animal::A_Animal(const A_Animal& copy)
{
    *this = copy;
}
A_Animal& A_Animal::operator=(const A_Animal& type)
{
    this->type = type.type;
    return(*this);
}
std::string A_Animal::getType() const
{
    return (this->type);
}
void A_Animal::makeSound() const
{
    std::cout << "The Animal make Sound" << std::endl;
}
