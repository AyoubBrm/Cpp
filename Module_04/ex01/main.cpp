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
    const Animal *a[2];
    for(int i = 0; i < 1; i++)
        a[i] = new Cat();
    for(int i = 1; i < 2; i++)
        a[i] = new Dog();

    delete j;
    delete i;
    delete Wrong;
    for(int i = 0; i < 2; i++)
        delete a[i];
}