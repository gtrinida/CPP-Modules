/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:38:53 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/24 17:18:52 by gtrinida         ###   ########.fr       */
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
    int     getRawBits( void ) const;
    float   toFloat( void ) const;
    int     toInt( void ) const;
    void    setRawBits(int const raw);
    
    ~Fixed();
};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif