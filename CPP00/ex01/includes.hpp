/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:48:21 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/19 18:50:11 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_HPP
# define INCLUDES_HPP

# include <iostream>
# include "PhoneBook.hpp"
# include "instructions.hpp"


int	valid_exit(std::string buffer);
int	valid_search(std::string buffer, PhoneBook *phonebook);
int	valid_add(std::string buffer, PhoneBook *phonebook);
int valid_command(std::string buffer, PhoneBook *phonebook);

#endif
