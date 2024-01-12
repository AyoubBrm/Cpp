#include "span.hpp"

Span::Span() : n(0)
{}

Span::Span(unsigned int N) : n(N)
{
    index = 1;
    if (this->n == 0)
        throw std::bad_alloc();
}

Span::Span(Span& copy)
{
    if(this != &copy)
        *this = copy;
}

Span& Span::operator=(Span& op)
{
    this->n = op.n;
    for(;op.it < op.arr.end(); op.it++)
        this->arr.push_back(*op.it);
    return (*this);
}

int& Span::operator[](unsigned int index)
{
    
    if (index >= 0 && index < arr.size())
        return(arr[index]);
    else
        throw std::out_of_range("You can't access to this element");
}

int Span::shortestSpan()
{
    if (this->n == 1)
        throw std::bad_alloc();
    else
    {
        std::sort(this->arr.begin(), this->arr.end());
        this->it = this->arr.begin();
        for (unsigned int i = 0; i < this->n; i++)
        {
            int j = i + 1;
            if (abs(this->it[j] - this->it[j + 1]) < abs(this->it[i] - this->it[i + 1]))
                return(abs(this->it[j] - this->it[j + 1]));
        }
    }
    return -1;
}

int Span::longestSpan()
{
    if (this->n == 1)
        throw std::bad_alloc();
    if (this->n > 1)
    {
        return (*max_element(this->arr.begin(),this->arr.end())\
                - *min_element(this->arr.begin(),this->arr.end()));
    }
    return -1;
}

void Span::addNumbe(int number)
{
    if (this->n < index)
        throw std::out_of_range("You can't access to this element");
    else
    {
        arr.push_back(number);
    }
    index++;
}

Span::~Span()
{}