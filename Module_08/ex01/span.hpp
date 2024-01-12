#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <exception>
#include <algorithm>

class Span
{
    private:
    std::vector<int> arr;
    std::vector<int>::iterator it;
    unsigned int index;
    unsigned int n;
    public:
    Span();
    Span(unsigned int N);
    Span(Span& copy);
    Span& operator=(Span& op);
    void addNumbe(int number);
    int shortestSpan(); 
    int longestSpan();
    int& operator[](unsigned int index);
    template <class Itbegin ,class Itend>
    void add_range(Itbegin itb, Itend ite)
    {
        for (; itb < ite; itb++)
            addNumbe(*itb);
    }
    ~Span();
};