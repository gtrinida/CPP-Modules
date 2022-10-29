/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:51:32 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/20 18:20:35 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
  	int N = 100;
  	Zombie *Horde = zombieHorde(N, "ALEX");

  	for (int i = 0; i < N; i++)
    	Horde[i].announce();
	delete [] Horde;
	return (0);
}
