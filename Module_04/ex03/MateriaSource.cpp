#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->type[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->type[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    *this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& op)
{
    for(int i = 0; i < 4; i++)
        this->type[i] = op.type[i];
    return (*this);
}

void MateriaSource::learnMateria(AMateria* type)
{  
    for(int i = 0; i < 4; i++)
    {
        if (this->type[i] != NULL)
            this->type[i] = type->clone();
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (type == "ice" )
            return  this->type[i] = new Ice(); 
        else if (type == "cure")
            return this->type[i] = new Cure(); 
    }
    return (0);
}