#pragma once
#include <iostream>
#include <string>
#include <algorithm>
 
template <class Type>

static Type min(Type x, Type y)
{
    if (x == y)
        return y;
    return (std::min(x, y));
}

template <class Type>
static Type max(Type x, Type y)
{
    if (x == y)
        return y;
    return (std::max(x, y));
}

template <class Type>
static void swap(Type &x, Type &y)
{
    std::swap(x, y);
}