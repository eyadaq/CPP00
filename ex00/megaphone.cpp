/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 07:44:24 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/09/11 08:00:03 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void 	print_arg(char *s)
{
	while (*s)
	{
		if (std::isalpha(*s))
		{
			std::cout<<(char)std::toupper(*s);
		}
		else 
			std::cout<<(char)*s;
		s++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		argv++;
		while (*argv)
		{
			print_arg(*argv);
			argv++;
			if (*argv)
				std::cout<<" ";
		}
		std::cout<<std::endl;
	}
		
	return (0);
}