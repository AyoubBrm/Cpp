#include "Array.hpp"

template <class T>
Array<T>::Array() : n(1)
{
    T *empty;
    empty = new T[n];
    delete [] empty;
}

template <class T>
Array<T>::Array(unsigned int n)  : arr(new T[n]) , n(n)
{}

template <class T>
Array<T>::Array(const Array& copy)
{
    if (this != &copy)
    {
        arr = NULL;
        *this = copy;
    } 
}

template <class T>
Array<T>& Array<T>::operator=(const Array& op)
{
    if (arr)
        delete [] arr;
    this->n = op.n;
    arr = new T[op.n];
    for(unsigned int i = 0; i < op.n; i++)
        this->arr[i] = op.arr[i];
    return (*this);
}

template <class T>
T& Array<T>::operator[](unsigned int index) const
{
    if (index >= 0 && index <= size())
        return arr[index];
    throw std::out_of_range("can't access to this element");
}

template <class T>
unsigned int Array<T>::size() const
{
    return(this->n);
}

template <class T>
Array<T>::~Array() 
{
    delete [] arr;
}