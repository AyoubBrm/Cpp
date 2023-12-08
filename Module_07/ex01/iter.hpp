#pragma once

#include <iostream>
#include <string>

template <class A>
void p(A x)
{
    std::cout << x << std::endl;
}

template <class T, class A>
void iter(T poin, int len, void(*p)(A))
{
    for (int i = 0; i < len; i++)
    {
        p(poin[i]);
    }
}