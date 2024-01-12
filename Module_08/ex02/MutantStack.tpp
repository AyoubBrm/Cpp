#pragma once

#include <deque>
#include <list>
#include <stack>
#include <string>
#include <iostream>

template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
    typedef typename  Container::iterator iterator;
    MutantStack(void) : std::stack<T, Container>() {}
    ~MutantStack(void){};
    MutantStack (MutantStack& copy) : std::stack<T, Container>(copy)
    {}
    MutantStack& operator=(MutantStack& copy)
    {
        std::stack<T, Container>::operator=(copy);
        return (*this);
    }
    iterator begin()
    {
        return (this->c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }
};