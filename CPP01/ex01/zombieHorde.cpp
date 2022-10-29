/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:52:02 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/21 20:18:22 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zm;
    
    zm = new Zombie [N];
    for (int i = 0; i < N; i++) 
    {
           zm[i].setName(name);
    }
    return (zm);
}
