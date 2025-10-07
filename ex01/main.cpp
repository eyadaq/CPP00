/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:09:28 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/10/07 20:35:36 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./PhoneBook/PhoneBook.hpp"

int 	main(void)
{
	std::string command;
	PhoneBook book = PhoneBook();
	
	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof() || !command.compare("EXIT"))
			return (1);
		if (!command.compare("ADD"))
		{
			Contact contact = Contact();
			if (!contact.setContactDetails())
				return (1);
			book.addContact(contact);
		}
		else if (!command.compare("SEARCH"))
		{
			book.displayContacts();
			book.searchContact();
		}
	}
	return (0);
}