#include "Cure.hpp"
#include "Ice.hpp"

Cure::Cure()
{

}

Cure::~Cure()
{

}

Cure::Cure(Cure& copy)
{
    *this = copy;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}


Cure& Cure::operator=(Cure& op)
{
    this->type = op.type;
    return (*this);
}

AMateria* Cure::clone() const
{
    return new Cure();
}
