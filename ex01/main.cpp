/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:09:28 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/09/01 20:22:33 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int 	main(void)
{
	std::string input;
	int flag;

	flag = 1;
	while (flag)
	{
		std::cout<<"PLease Enter one of the following commands {ADD, SEARCH, EXIT}"<<std::endl;
		std::cin>>input;

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
		else {
			std::cout<<"Input Format is Incorrect!!!!"<<std::endl;
			std::cout<<"PLease Enter one of the following commands {ADD, SEARCH, EXIT}"<<std::endl;
			std::cin>>input;
		}
	}
	return (0);
}