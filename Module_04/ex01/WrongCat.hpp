#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
   public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat& operator=(const WrongCat type);
};
#endif