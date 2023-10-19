#ifndef ICE_HPP
#define ICE_HPP

#include "Amateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(Ice& copy);
        Ice &operator=(Ice &op);
        AMateria* clone() const;
        void use(ICharacter& target);
};
#endif