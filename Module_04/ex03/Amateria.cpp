#include "Amateria.hpp"
AMateria::AMateria() : type("Default")
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}
AMateria& AMateria::operator=(const AMateria &copy)
{
    this->type = copy.type;
    return (*this);
}

AMateria::AMateria(const AMateria& copy)
{
    *this = copy;
}
std::string const & AMateria::getType() const
{
    return (this->type);
} 
