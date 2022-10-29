/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:41:47 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/19 18:44:26 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

size_t    PhoneBook::getCount(void)
{
    return(this->count);
}

size_t     PhoneBook::getIndex(void)
{
    return(this->index);
}

void    PhoneBook::setCount(void)
{
    if (this->count < 8)
        this->count += 1;
}

void    PhoneBook::setIndex(void)
{
    if (this->index == 7)
    {    
        this->index = 0;
        return ;
    }
    this->index += 1;
}

PhoneBook::PhoneBook()
{
    count = 0;
    index = 0;
}