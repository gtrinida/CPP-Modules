#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 value;
    static const int    fractional_bits = 8;
public:
    Fixed();
    Fixed(const int i);
    Fixed(const float f);
    Fixed(const Fixed &fixed);
    
    Fixed   &operator=(const Fixed &fixed);
    int     getRawBits( void ) const;
    float   toFloat( void ) const;
    int     toInt( void ) const;
    void    setRawBits(int const raw);
    
    ~Fixed();
};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif