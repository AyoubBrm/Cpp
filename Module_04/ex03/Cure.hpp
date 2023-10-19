#ifndef CURE_HPP
#define CURE_HPP

#include "Amateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(Cure& copy);
        Cure& operator=(Cure& op);
        AMateria* clone() const;
       void use(ICharacter& target);
};
#endif