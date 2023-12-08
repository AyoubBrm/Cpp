#include "iter.hpp"

int main ()
{
    char a[] = {'a', 'y', 'b'};
    int b[] = {1, 2, 3};
    double c[] = {1.99, 2.33, 3.44};

    iter(a, 3, p<char>);
    iter(b, 3, p<int>);
    iter(c, 3, p<double>);
}