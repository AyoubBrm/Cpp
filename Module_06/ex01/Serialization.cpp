#include "Serialization.hpp"
Serializ::Serializ()
{}

Serializ::~Serializ()
{}

Serializ::Serializ(const Serializ& copy)
{
    if (this != &copy)
        *this = copy;
}

Serializ& Serializ::operator=(const Serializ& op)
{
    (void)op;
    return (*this);
}

uintptr_t Serializ::serialize(Data * ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializ::deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}
