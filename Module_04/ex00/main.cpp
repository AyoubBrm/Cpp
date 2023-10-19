#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    WrongAnimal* Wrong = new WrongCat();
    std::cout << Wrong->getType() << std::endl;
    Wrong->makeSound();

    delete j;
    delete i;
    delete Wrong;
}