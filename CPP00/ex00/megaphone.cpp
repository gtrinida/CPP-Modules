/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:04:34 by gtrinida          #+#    #+#             */
/*   Updated: 2022/10/17 10:02:09 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(char **line)
{
	for (size_t i = 1; line[i]; i++)
	{
		for (size_t j = 0; line[i][j]; j++)
		{
			if (line[i][j] >= 97 && line[i][j] <= 122)
				line[i][j] -= 32;
			std::cout <<line[i][j];
		}
		std::cout <<" ";
	}
}

int main(int argc, char **argv)
{
    if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	megaphone(argv);
    std::cout << std::endl;
	return (1);
}
