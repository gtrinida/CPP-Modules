/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:12:01 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/20 15:47:51 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie Foo;
    Foo.setName("Foo");
    Foo.announce();

    Zombie *Alex = newZombie("Alex");
    Alex->announce();

    randomChump("Jonh");
    delete(Alex);
    return (1);
}