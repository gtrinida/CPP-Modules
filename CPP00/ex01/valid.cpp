/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:00:46 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/19 18:05:48 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int	valid_exit(std::string buffer)
{
	if (buffer[1] == 'X' && buffer[2] == 'I' && buffer[3] == 'T' && buffer[4] == '\0')
		return (-1);
	else
		std::cout << ERROR_COMMAND;	
	return (1);
}

int	valid_search(std::string buffer, PhoneBook *phonebook)
{
	if (buffer[1] == 'E' && buffer[2] == 'A' && buffer[3] == 'R' && buffer[4] == 'C' &&
			buffer[5] == 'H' && buffer[6] == '\0')

	{
        std::cout << CONTACTS;
        for (size_t i = 0; i < phonebook->getCount(); i++)
        {
            std::cout << std::endl << "Contact №" << i + 1 << "\n\n";
            phonebook->contacts[i].getContacts();
        }
        std::cout <<NEXT;
        return (0);
    }
    else
		std::cout << ERROR_COMMAND;	
	return (1);
}

int	valid_add(std::string buffer, PhoneBook *phonebook)
{
	if (buffer[1] == 'D' && buffer[2] == 'D' && buffer[3] == '\0')
	{
        std::cout << FIRST_NAME;
        phonebook->contacts[phonebook->getIndex()].setFirstName(buffer);
        std::cout << LAST_NAME;
        phonebook->contacts[phonebook->getIndex()].setLastName(buffer);
        std::cout << NICK_NAME;
        phonebook->contacts[phonebook->getIndex()].setNickname(buffer);
        std::cout << PHONE_NUMBER;
        phonebook->contacts[phonebook->getIndex()].setPhoneNumber(buffer);
        std::cout << DARKEST_SECRET;
        phonebook->contacts[phonebook->getIndex()].setDarkestSecret(buffer);
        phonebook->setCount();
        phonebook->setIndex();
        std::cout << NEXT;
        return (0);
    }
    else
		std::cout << ERROR_COMMAND;	
	return (1);
}

int valid_command(std::string buffer, PhoneBook *phonebook)
{
	if (buffer[0] == 'A')
		return (valid_add(buffer, phonebook));
	else if (buffer[0] == 'S')
		return(valid_search(buffer, phonebook));
	else if (buffer[0] == 'E')
		return(valid_exit(buffer));
	std::cout << ERROR_COMMAND;
	return (1);
}
