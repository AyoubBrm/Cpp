#pragma once
#include <iostream>
#include <string>

template <class T>
class Array 
{
    private:
    T *arr;
    unsigned int n;
    public:
    Array();
    Array(unsigned int n);
    Array(const Array& copy);
    Array& operator=(const Array& op);
    T& operator[](unsigned int index) const;
    unsigned int size() const;
    ~Array();
};