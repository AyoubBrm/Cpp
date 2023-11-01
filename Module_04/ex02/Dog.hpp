#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
    private:
    Brain *brain;
    public:
    Dog();
    ~Dog();
    Dog(Dog& copy);
    Dog& operator=(Dog& op); 
    void makeSound() const;
};

#endif