#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>
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
    Fixed(const float floating_point);
    int toInt( void ) const;
    float toFloat( void ) const;

    bool operator<(const Fixed& point) const;
    bool operator>(const Fixed& point) const;
    bool operator>=(const Fixed& point) const;
    bool operator<=(const Fixed& point) const;
    bool operator==(const Fixed& point) const;
    bool operator!=(const Fixed& point) const;

    Fixed& operator*(const Fixed& point);
    Fixed& operator+(const Fixed& point);
    Fixed& operator-(const Fixed& point);
    Fixed& operator/(const Fixed& point);

    Fixed& operator++();
    Fixed& operator++(int);
    Fixed& operator--(int);
    Fixed& operator--();
    
    static Fixed& min(Fixed& point_a, Fixed& point_b);
    static Fixed& max( Fixed& point_a, Fixed& point_b);
    const static Fixed& min(const Fixed& point_a, const Fixed& point_b);
    static const Fixed& max(const Fixed& point_a, const Fixed& point_b);
};
std::ostream& operator<<(std::ostream& COUT, Fixed const& f_class);
#endif