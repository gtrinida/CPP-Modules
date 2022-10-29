/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:19:52 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/29 19:29:19 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(const std::string name, Weapon &weapon);
   
    void    setName(std::string name);
    void    attack();
    
private:
    std::string _name;
    Weapon     &_weapon;
};

#endif