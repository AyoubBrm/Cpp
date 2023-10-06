#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed()
{
    this->fixed_point = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& copy)
{
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& b)
{
    this->fixed_point = b.fixed_point;
    return *this;
}

Fixed::Fixed(const int fixed)
{
    int temp = fixed;
    temp = temp << bit;
    this->fixed_point = temp;
}

Fixed::Fixed(const float floating_point)
{
    this->fixed_point = roundf(floating_point * (1 << bit));
}

int Fixed::toInt( void ) const
{
    return (this->fixed_point >> bit);
}

float Fixed::toFloat( void ) const
{
     return ((float)(this->fixed_point) / (1 << bit));
}

bool Fixed::operator<(const Fixed& point) const
{
    if (this->fixed_point < point.fixed_point)
        return (true);
    else
        return (false);
}
bool Fixed::operator>(const Fixed& point) const
{
    if (this->fixed_point > point.fixed_point)
        return (true);
    else
        return (false);
}
bool Fixed::operator>=(const Fixed& point) const
{
    if (this->fixed_point >= point.fixed_point)
        return (true);
    else
        return (false);
}
bool Fixed::operator<=(const Fixed& point) const
{
    if (this->fixed_point <= point.fixed_point)
        return (true);
    else
        return (false);
}
bool Fixed::operator==(const Fixed& point) const
{
    if (this->fixed_point == point.fixed_point)
        return (true);
    else
        return (false);
}
bool Fixed::operator!=(const Fixed& point) const
{
    if (this->fixed_point != point.fixed_point)
        return (true);
    else
        return (false);
}
Fixed& Fixed::operator*(const Fixed& point) 
{
   this->fixed_point = this->toFloat() * point.fixed_point;
    return (*this);
}
Fixed& Fixed::operator+(const Fixed& point)
{
    this->fixed_point = this->toFloat() + point.toFloat();
    return (*this);
}
Fixed& Fixed::operator-(const Fixed& point)
{
    this->fixed_point = this->toFloat() - point.toFloat();
    return (*this);
}
Fixed& Fixed::operator/(const Fixed& point)
{
    this->fixed_point = this->toFloat() / point.toFloat();
    return (*this);
}
Fixed& Fixed::operator++()
{
    this->fixed_point++;
    return (*this);
}
Fixed& Fixed::operator++(int)
{
    ++this->fixed_point;
    return (*this);
}
Fixed& Fixed::operator--(int)
{
    --this->fixed_point;
    return (*this);
}
Fixed& Fixed::operator--()
{
    this->fixed_point--;
    return (*this);
}
Fixed& Fixed::min(Fixed& point_a, Fixed& point_b)
{
    if (point_a < point_b)
        return (point_a);
    else 
        return (point_b);
}
Fixed& Fixed::max( Fixed& point_a, Fixed& point_b)
{
    if (point_a > point_b)
        return (point_a);
    else 
        return (point_b);
}
const Fixed& Fixed::min(const Fixed& point_a, const Fixed& point_b)
{
    if (point_a < point_b)
        return (point_a);
    else 
        return (point_b);
}
const Fixed& Fixed::max(const Fixed& point_a, const Fixed& point_b )
{
    if (point_a > point_b)
        return (point_a);
    else 
        return (point_b);
}

std::ostream& operator<<(std::ostream& COUT, Fixed const& f_class)
{
    COUT << f_class.toFloat();
    return (COUT);
}