#include "Fixed.hpp"

Fixed::Fixed() 
{
   value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int i)
{
    this->value = i << fractional_bits;
}

Fixed::Fixed(const float f)
{
    this->value = roundf(f * (1 << fractional_bits));
}

Fixed::~Fixed(){}

Fixed Fixed::operator*(const Fixed &fixed)
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	return Fixed(this->toFloat() / fixed.toFloat());
}

bool Fixed::operator!=(const Fixed &fixed)
{
    return this->value != fixed.value;
}

bool Fixed::operator==(const Fixed &fixed)
{
    return this->value == fixed.value;
}

bool Fixed::operator<=(const Fixed &fixed)
{
    return this->value<=fixed.value;
}

bool Fixed::operator>=(const Fixed &fixed)
{
    return this->value>=fixed.value;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return this->getRawBits() < fixed.getRawBits();
}

Fixed &Fixed::operator++(void)
{
    ++value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    value++;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    value--;
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    --value;
    return *this;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    this->value = fixed.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed &fixed)
{
    return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed)
{
    return (this->toFloat() - fixed.toFloat());
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

int Fixed::getRawBits(void) const
{
    return(this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

float Fixed::toFloat( void ) const
{
	return (float) value / (1 << fractional_bits);
}

int Fixed::toInt( void ) const
{
    return value >> fractional_bits;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}
