#pragma once
#include <iostream>
#include <string>
 
template <class Type>

Type min(Type x, Type y)
{
    if (y < x)
        return y;
    else if (x < y)
        return x;
    return y;
}

template <class Type>
Type max(Type x, Type y)
{
    if (y > x)
        return y;
    else if (x > y)
        return x;
    return y;
}

template <class Type>
void swap(Type &x, Type &y)
{
    Type a = x;
    Type b = y;
    x = b;
    y = a;
}