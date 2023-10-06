#ifndef FIXED_CPP
#define FIXED_CPP

#include <iostream>
#include <string>

class Fixed
{
    private:
    int fixed_point;
    static const int bit;
    public:
    Fixed();
    ~Fixed();
    Fixed(Fixed& copy);
    Fixed& operator=(Fixed& b);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed(const int fixed);
};

#endif
