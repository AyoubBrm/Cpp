#ifndef SERIALIZATION_CPP
#define SERIALIZATION_CPP

#include <iostream>
#include <string>
#include <stdint.h>
//reinterpret_cast

typedef struct s_data
{
    int convert;
}Data;

class Serializ
{
    private:
    Serializ();
    ~Serializ();
    Serializ(const Serializ& copy);
    Serializ& operator=(const Serializ& op);
    public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};
#endif