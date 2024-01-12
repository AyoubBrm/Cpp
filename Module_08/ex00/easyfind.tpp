#include "easyfind.hpp"

template <class T>
int easyfind(T arr, int find)
{
    std::vector<int>::iterator i;
    i = std::find (arr->begin() , arr->end(), find);
    if (i[0])
        return (*i);
    throw std::exception();
    return 0;
}