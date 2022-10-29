/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:04:29 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/19 17:59:45 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

void	phonebook_on(PhoneBook *phonebook)
{
	int exit = 0;
	std::string buffer;
	std::cout << START;
	std::cout << PROMO;
	while (exit != PHONEBOOK_EXIT) 
	{
		getline(std::cin, buffer);
		exit = valid_command(buffer, phonebook);
		if (exit == 1)
			std::cout << TYPE_OF_COMMANDS;
	}
	std::cout << EXIT;
}

int	main(void)
{
	PhoneBook	phonebook;
	phonebook_on(&phonebook);
}
