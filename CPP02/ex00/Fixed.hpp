/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:38:53 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/29 01:40:53 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 value;
    static const int    fractional_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed   &operator=(const Fixed &fixed);
    ~Fixed();
    
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif