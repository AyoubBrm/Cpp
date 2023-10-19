#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
    private:
    Brain *brain;
    public:
    Cat();
    ~Cat();
    Cat(Cat& copy);
    Cat& operator=(Cat& op);
    std::string getType() const;
    void makeSound() const;
};
#endif