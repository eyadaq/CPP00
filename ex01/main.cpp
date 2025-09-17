/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:09:28 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/09/17 10:06:17 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./PhoneBook/PhoneBook.hpp"

int 	main(void)
{
	std::string input;
	int flag;
	PhoneBook book = PhoneBook();
	flag = 1;
	while (flag)
	{
		if (!input.compare("ADD"))
		{
			
		}
		else if (!input.compare("SEARCH"))
		{
			
		}
		else if (!input.compare("EXIT"))
		{
			flag = 0;
		}
	}
	return (0);
}