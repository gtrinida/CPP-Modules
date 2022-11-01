/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:38:53 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/30 03:50:20 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    Fixed   operator*(const Fixed &fixed);
 	bool operator!=(const Fixed &fixed);  
    bool operator==(const Fixed &fixed);
    bool operator>=(const Fixed &fixed);
    bool operator<=(const Fixed &fixed);
    bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
    Fixed   &operator++(void);
    Fixed   operator++(int);
    Fixed   &operator--(void);
    Fixed   operator--(int);
    Fixed   operator+(const Fixed &fixed);
    Fixed   operator-(const Fixed &fixed);
    Fixed   operator/(const Fixed &fixed);
    static Fixed &min(Fixed &fixed1, Fixed &fixed2);
    static Fixed &max(Fixed &fixed1, Fixed &fixed2);

    static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);
    static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);

    int     getRawBits( void ) const;
    float   toFloat( void ) const;
    int     toInt( void ) const;
    void    setRawBits(int const raw);
    
    ~Fixed();
};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif