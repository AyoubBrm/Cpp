#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class A_Animal
{
    protected:
    std::string type;
    public:
    A_Animal();
    virtual ~A_Animal();
    A_Animal(const A_Animal& copy);
    A_Animal& operator=(const A_Animal& type);
    std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif