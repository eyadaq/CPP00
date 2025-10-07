/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:09:36 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/10/07 20:21:28 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() :_index(0){}

void PhoneBook::addContact(Contact c)
{
    _contacts[_index % 8] = c;
    _index++;
}

void PhoneBook::displayContacts() const
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nick Name" << std::endl;
    for (int i = 0; i < MAX_CONTACTS; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        
        std::string firstName = _contacts[i].getFirstName();
        if (firstName.length() > 10)
            firstName = firstName.substr(0, 9) + ".";
        std::cout << std::setw(10) << firstName << "|";
        
        std::string lastName = _contacts[i].getLastName();
        if (lastName.length() > 10)
            lastName = lastName.substr(0, 9) + ".";
        std::cout << std::setw(10) << lastName << "|";
        
        std::string nickName = _contacts[i].getNickName();
        if (nickName.length() > 10)
            nickName = nickName.substr(0, 9) + ".";
        std::cout << std::setw(10) << nickName << std::endl;
    }
}

void PhoneBook::searchContact() const
{
    int index;
    std::cout << "Enter the index of the contact to search: ";
    std::cin >> index;
    std::cin.ignore();
    if (std::cin.eof())
        exit(1);

    if (index < 1 || index > (this->_index < MAX_CONTACTS ? this->_index : MAX_CONTACTS))
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    const Contact &contact = _contacts[index - 1];
    std::cout << "Contact found:" << std::endl;
    std::cout << "First Name: " << contact.getFirstName() + "\n";
    std::cout << "Last Name: " << contact.getLastName() + "\n";
    std::cout << "Nick Name: " << contact.getNickName() + "\n";
    std::cout << "Phone Number: " << contact.getPhoneNumber() + "\n";
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() + "\n";
}
