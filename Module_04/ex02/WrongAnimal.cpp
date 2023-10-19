#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal type)
{
    this->type = type.type;
    return(*this);
}
std::string WrongAnimal::getType() const
{
    return (this->type);
}
void WrongAnimal::makeSound() const
{
    std::cout << "The WorngAnimal make Sound" << std::endl;
}