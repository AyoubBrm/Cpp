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
    for (int i = 0; i < 4; i++)
        this->type[i] = NULL;
    *this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& op)
{
    if(this != &op)
    {
        for(int i = 0; i < 4; i++)
        {
            if(type[i] != NULL)
            {
                delete type[i];
                type[i] = NULL;
            }
        }
        for(int i = 0; i < 4; i++)
        {
            if(op.type[i] != NULL)
                type[i] = op.type[i]->clone();
            else
                type[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* type)
{
    if (type == NULL)
        return ;
    for(int i = 0; i < 4; i++)
    {
        if (this->type[i] == NULL)
        {
            this->type[i] = type->clone();
            break;
        }
    }
    delete type;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->type[i] != NULL && this->type[i]->getType() == type)
        {
            return  this->type[i];
        }
    }
    return (NULL);
}