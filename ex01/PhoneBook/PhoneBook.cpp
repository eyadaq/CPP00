/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:09:36 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/09/11 11:30:21 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): _index(0){}

void PhoneBook::addContact(const Contact &contact)
{
	this->_contacts[this->_index].setDarkestSecret(contact.getDarkestSecret());
	this->_contacts[this->_index].setFirstName(contact.getFirstName());
	this->_contacts[this->_index].setLastName(contact.getLastName());
	this->_contacts[this->_index].setNickName(contact.getNickName());
	this->_contacts[this->_index].setPhoneNumber(contact.getPhoneNumber());
	this->_index = (this->_index +  1) % MAX_CONTACTS;
}

void PhoneBook::printAllContacts(){
	int i = 0;

	while (i < this->_index)
	{
		
	}
}

void PhoneBook::printContactById(int id){
	if (id - 1 > MAX_CONTACTS || id - 1 < MAX_CONTACTS)
		std::cout<<
}
