#include "Fixed.hpp"
#include <cmath>
class Fixed
{
    private:
    int fixed_point;
    static const int bit;
    public:
    Fixed() : fixed_point = 0
    {
    }
    
    ~Fixed()
    {
    }
    
    Fixed(const Fixed& copy)
    {
        std::cout << "Copy constructor called" << std::endl;
        *this = copy;
    }
    
    Fixed& operator=(const Fixed& b)
    {
        this->fixed_point = b.fixed_point;
        return *this;
    }
    
    Fixed(const int fixed)
    {
        std::cout << "Int constructor called" << std::endl;
        int temp = fixed;
        temp = temp << bit;
        this->fixed_point = temp;
    }
    
    Fixed(const float floating_point)
    {
        std::cout << "Float constructor called" << std::endl;
        this->fixed_point = roundf(floating_point * (1 << bit));
    }
    
    int toInt( void ) const
    {
        return (this->fixed_point >> bit);
    }
    
    float toFloat( void ) const
    {
         return ((float)(this->fixed_point) / (1 << bit));
    }

    pool operator>(Fixed& point)
    {
        if (this->fixed_point > point.fixed_point)
            return (true);
        else
            return (false)
    }
    pool operator<(Fixed& point)
    {
        if (this->fixed_point < point.fixed_point)
            return (true);
        else
            return (false)
    }
    pool operator>=(Fixed& point)
    {
        if (this->fixed_point >= point.fixed_point)
            return (true);
        else
            return (false)
    }
    pool operator<=(Fixed& point)
    {
        if (this->fixed_point <= point.fixed_point)
            return (true);
        else
            return (false)
    }
    pool operator==(Fixed& point)
    {
        if (this->fixed_point == point.fixed_point)
            return (true);
        else
            return (false)
    }
    pool operator!=(Fixed& point)
    {
        if (this->fixed_point != point.fixed_point)
            return (true);
        else
            return (false)
    }
};
const int Fixed::bit = 8;

std::ostream& operator<<(std::ostream& COUT, Fixed const& f_class)
{
    COUT << f_class.toFloat();
    return (COUT);
}
