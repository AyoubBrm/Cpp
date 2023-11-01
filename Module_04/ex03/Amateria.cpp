#include "Amateria.hpp"
AMateria::AMateria() : type("Default")
{
}
AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria& copy)
{
    *this = copy;
}
AMateria& AMateria::operator=(const AMateria &copy)
{
    this->type = copy.type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->type);
} 
