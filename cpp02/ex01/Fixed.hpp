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
    Fixed(const Fixed& copy);
    Fixed& operator=(const Fixed& b);
    Fixed(const int fixed);
    Fixed(const float floting_point);
    int toInt( void ) const;
    float toFloat( void ) const;
};
std::ostream& operator<<(std::ostream& COUT, Fixed const& f_class);

#endif
