/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:26:04 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/23 02:24:27 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
public:
    void	complain(std::string level);
private:

    void    	debug(void);
    void    	info(void);
    void    	warning(void);
    void   	 	error(void);

};

#endif