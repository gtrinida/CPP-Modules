/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:20:17 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/21 22:20:32 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string name);
   
    void    setName(std::string name);
    void    attack();
    void    setWeapon(Weapon &type);
private:
    std::string name;
    Weapon*     _weapon;
};

#endif