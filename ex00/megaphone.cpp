/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 07:44:24 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/10/07 20:03:02 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void 	print_arg(const char *s)
{
	while (*s)
	{
		unsigned char c = static_cast<unsigned char>(*s);
		if (std::isalpha(c))
		{
			std::cout<<static_cast<char>(std::toupper(c));
		}
		else 
			std::cout<<*s;
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
		}
		std::cout<<std::endl;
	}
		
	return (0);
}