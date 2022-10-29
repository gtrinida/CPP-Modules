/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:35:04 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/19 18:50:49 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    int count;
    int index;
public:

    Contact	contacts[8];
    void	setCount(void);
    void	setIndex(void);
    size_t	getCount(void);
    size_t	getIndex(void);
    
    PhoneBook();
};

#endif
