#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(Dog& copy);
        Dog& operator=(Dog& op);
        std::string getType() const;
        void makeSound() const;
};

#endif