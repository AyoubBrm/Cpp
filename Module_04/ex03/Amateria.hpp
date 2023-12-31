#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"
class ICharacter;

class AMateria 
{
    protected:
    std::string type;
    public:
    AMateria();
    virtual ~AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria &copy);
    AMateria& operator=(const AMateria &copy);
    std::string const & getType() const; 
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};
#endif
