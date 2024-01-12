#pragma once

#include <iostream>
#include <string>

template <class T>
void p(T x)
{
    std::cout << x << std::endl;
}

template <class T, class A>
void iter(T poin, int len, A p)
{
    for (int i = 0; i < len; i++)
    {
        p(poin[i]);
    }
}