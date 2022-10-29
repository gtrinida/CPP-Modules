/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:20:47 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/19 18:43:06 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

void   Contact::getContacts(void)
{
    std::cout << "First Name: " << this->first_name << std::endl;
    std::cout << "Last Name: " << this->last_name << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phone_number << std::endl;
    std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}

void    Contact::setFirstName(std::string buffer)
{
    getline(std::cin, buffer);
    this->first_name = buffer; 
}

void    Contact::setLastName(std::string buffer)
{
    getline(std::cin, buffer);
    this->last_name = buffer; 
}

void    Contact::setNickname(std::string buffer)
{
    getline(std::cin, buffer);
    this->nickname = buffer; 
}

void    Contact::setPhoneNumber(std::string buffer)
{
    getline(std::cin, buffer);
    this->phone_number = buffer; 
}

void    Contact::setDarkestSecret(std::string buffer)
{
    getline(std::cin, buffer);
    this->darkest_secret = buffer; 
}
