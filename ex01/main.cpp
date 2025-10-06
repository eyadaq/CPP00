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
	std::string command;
	int flag;
	PhoneBook book = PhoneBook();
	flag = 1;
	while (flag)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
		{
			Contact contact = Contact();
			contact.setConstactDetails();
			book.addContact(contact);
		}
		else if (!command.compare("SEARCH"))
		{
			book.displayContacts();
			book.searchContact();
		}
		else if (!command.compare("EXIT"))
		{
			flag = 0;
		}
	}
	return (0);
}