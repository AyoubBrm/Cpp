#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{   
    private:
    AMateria* type[4];
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource& copy);
    MateriaSource& operator=(const MateriaSource& op);
    void learnMateria(AMateria* type);
    AMateria* createMateria(std::string const & type);
    
};
#endif