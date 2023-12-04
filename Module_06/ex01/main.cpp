#include "Serialization.hpp"

int main()
{
    Data ptr;
    Data *s_ptr;
    uintptr_t a;

    ptr.convert = 1000;
    std::cout << &ptr << std::endl;
    a = Serializ::serialize(&ptr);
    s_ptr = Serializ::deserialize(a);
    std::cout << s_ptr << std::endl;
}