#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";  
    std::cout << "WrongCat Constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
}
WrongCat& WrongCat::operator=(const WrongCat type)
{
    this->type = type.type;
    return(*this);
}