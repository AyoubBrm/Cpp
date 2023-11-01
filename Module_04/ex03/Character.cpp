#include "Character.hpp"

Character::Character()
{
    this->temp = new T_mat;
    this->origin = this->temp;
    temp->next = NULL;
    for (int i = 0; i < 4; i++)
        this->slot[i] = NULL;
    this->name = "Default";
}

Character::Character(std::string name)
{
    this->temp = new T_mat;
    this->origin = this->temp;
    temp->next = NULL;
    for (int i = 0; i < 4; i++)
        this->slot[i] = NULL;
    this->name = name;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->slot[i];
    T_mat *temp;
    while (origin->next)
    {
        temp = origin;
        if (temp->m)
            delete temp->m;
        origin = origin->next;
        delete temp;
    }
    delete origin;
}

Character::Character(const Character &copy)
{
    this->temp = new T_mat;
    this->origin = this->temp;
    temp->next = NULL;
    for (int i = 0; i < 4; i++)
        this->slot[i] = NULL;
    *this = copy;
}
Character &Character::operator=(const Character &op)
{
    if (this != &op)
    {
        for (int i = 0; i < 4; i++)
        {
            if (op.slot[i])
                this->slot[i] = op.slot[i]->clone();
        }
        this->name = op.name;
    }
    return (*this);
}
std::string const &Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria *m)
{
    int i;
    i = 0;

    while (i < 4)
    {
        if (this->slot[i] == NULL && m)
        {
            this->slot[i] = m->clone();
            break;
        }
        i++;
    }
    std::cout << "Inventory if Full" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->temp->next = new T_mat;
        this->temp->m = slot[idx];
        this->temp = this->temp->next;
        this->temp->next = NULL;
        slot[idx] = NULL;
    }
    else
        return;
}

void Character::use(int idx, ICharacter &target)
{
    if (slot[idx] != NULL)
        slot[idx]->use(target);
    else
        std::cerr << "This inventor " << idx << " is empty" << std::endl;
}
