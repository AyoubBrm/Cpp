#include "Character.hpp"

Character::Character(std::string name)
{
    this->temp = new T_mat;
    this->origin = this->temp;
    for (int i = 0 ; i < 4; i++)
       this->slot[i]  = NULL;
    this->name = name;
}

Character::~Character()
{
    T_mat *temp;
    while (origin)
    {
        temp = origin;
        delete temp->m;
        origin = origin->next;
        delete temp;
    }
    for (int i = 0 ; i < 4; i++)
       delete this->slot[i];
}

Character::Character(const Character& copy)
{
    *this = copy;
}
Character& Character::operator=(const Character& op)
{
    for (int i = 0 ; i < 4; i++)
        this->slot[i] = op.slot[i];
    this->name = op.name;
    return (*this);
}
std::string const & Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m)
{
    int i;
    i = 0;
    while (i < 4)
    {
        if (this->slot[i] == NULL)
        {
            this->slot[i] = m->clone();
            return ;
        }
        i++;
    }
    std::cout << "Inventory if Full" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx > 0 && idx < 4)
    {
        temp->next = new T_mat;
        temp->m = slot[idx];
        temp = temp->next;
        this->temp->next = NULL;
        slot[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (slot[idx] != NULL)  
        slot[idx]->use(target);
    else 
        std::cerr << "This inventor "<< idx << " is empty" << std::endl;
}

