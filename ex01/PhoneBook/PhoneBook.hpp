/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 08:40:15 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/09/11 11:32:22 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define MAX_CONTACTS 8

#include "../Contact/Contact.hpp"
class PhoneBook{
	private:
		int _index;
		Contact _contacts[MAX_CONTACTS];
	public :
		PhoneBook();
		void addContact(const Contact &contact);
		void printAllContacts();
		void printContactById(int id);
};

#endif