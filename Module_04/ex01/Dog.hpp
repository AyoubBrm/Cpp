#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
    Brain *brain;
    public:
    Dog();
    ~Dog();
    Dog(Dog& copy);
    Dog& operator=(Dog& op);
    std::string getType() const;
    void makeSound() const;
};

#endif