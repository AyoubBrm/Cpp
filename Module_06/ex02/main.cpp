#include "Base.hpp"
#include "C.hpp"
#include "B.hpp"
#include "A.hpp"

int main()
{
    Base *ptr = generate();
    B b;
    C c;
    A a;

    identify(ptr);
    identify(c);
    identify(b);
    identify(a);
    return 0;
}