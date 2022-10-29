/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:48:17 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/19 17:48:18 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "includes.hpp"

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    int count;
public:
    void	setFirstName(std::string buffer);
    void	setLastName(std::string buffer);
    void	setNickname(std::string buffer);
    void	setPhoneNumber(std::string buffer);
    void	setDarkestSecret(std::string buffer);
	void	getContacts(void);
};

#endif