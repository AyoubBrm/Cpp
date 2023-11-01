#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Amateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class AMateria;
typedef struct S_Mat
{
    AMateria *m;
    struct S_Mat *next;
} T_mat;

class Character : public ICharacter
{
private:
    std::string name;
    AMateria *slot[4];
    T_mat *temp;
    T_mat *origin;

public:
    Character();
    Character(std::string name);
    ~Character();
    Character(const Character &copy);
    Character &operator=(const Character &op);
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};
#endif