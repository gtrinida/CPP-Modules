/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:48:25 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/19 18:05:56 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_HPP
# define INSTRUCTIONS_HPP

# define START \
"\n      Enter command to start      \n\n\
---------LIST OF COMMANDS---------\n\
| ADD: To add a new contact.     |\n\
| SEARCH: To show your contacts. |\n\
| EXIT: To quit phonebook.       |\n\
----------------------------------\n\n"               
# define PROMO				"What do you want to do?\n"
# define NEXT				"\nWhat do you want to do next?\n"
# define ERROR_CONTACT_INFO	"Please write correct contact information.\n";
# define ERROR_COMMAND      "Command does not exist.\n"
# define FIRST_NAME         "FIRST NAME: "
# define LAST_NAME          "LAST NAME: "
# define NICK_NAME          "NICKNAME: "
# define PHONE_NUMBER       "PHONE NUMBER: "
# define DARKEST_SECRET     "DARKEST SECRET: "
# define PHONEBOOK_EXIT     -1
# define EXIT               "See you next time!!!\n"
# define TYPE_OF_COMMANDS	"Please use: [ADD] or [SEARCH] or [EXIT] (without [] and spaces)\n"
# define CONTACTS			"\nLIST OF CONTACTS\n"

#endif