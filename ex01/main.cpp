/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:09:28 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/09/11 11:36:19 by eaqrabaw         ###   ########.fr       */
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
		std::cout<<"PLease Enter one of the following commands {ADD, SEARCH, EXIT}"<<std::endl;
		std::cin>>input;

		if (!input.compare("ADD"))
		{
			Contact temp= Contact();
			temp.getContactInfoFromUser();
			book.addContact(temp)
		}
		else if (!input.compare("SEARCH"))
		{
			book.printAllContacts();
			book.printContactById();
		}
		else if (!input.compare("EXIT"))
		{
			flag = 0;
		}
	}
	return (0);
}