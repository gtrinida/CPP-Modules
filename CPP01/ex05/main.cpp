/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:25:56 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/23 03:45:56 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	fictional_person;
	
	fictional_person.complain("DEBUG");
	fictional_person.complain("INFO");
	fictional_person.complain("WARNING");
	fictional_person.complain("ERROR");
	return (0);   
}
