#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongAnimal 
{
    protected:
        std::string type;
        public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal& operator=(const WrongAnimal type);
        std::string getType() const;
        void makeSound() const;
};

#endif