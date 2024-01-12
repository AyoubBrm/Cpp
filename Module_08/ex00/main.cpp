#include "easyfind.hpp"
#include "easyfind.tpp"
int main()
{
    try
    {
        std::vector<int> arr;
        for (int i = 1; i <= 100; i++)
            arr.push_back(i);
        int find = easyfind(&arr, 100);
        std::cout << "find is "<< find << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "error : This number isn't exist in this array" << std::endl;
    }
}