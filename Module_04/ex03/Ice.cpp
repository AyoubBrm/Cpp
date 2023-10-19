#include "Ice.hpp"

Ice::Ice()
{
}

Ice::~Ice()
{
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(Ice& copy)
{
    *this = copy;
}

Ice& Ice::operator=(Ice& op)
{
    this->type = op.type;
    return(*this);
}

AMateria* Ice::clone() const
{
    return new Ice();
}

