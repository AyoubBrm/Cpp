#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

class Base
{
    public:
        virtual ~Base();
};
void identify(Base* p);
void identify(Base& p);
Base * generate(void);