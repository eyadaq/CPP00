/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:24:55 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/09/11 11:26:39 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
# include <string>

class Contact{
	private :
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public :
		Contact();
		Contact(const std::string &fn, const std::string &ln, const std::string &nn, const std::string &pn, const std::string &ds);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;

		void setFirstName(const std::string &fn);
		void setLastName(const std::string &ln);
		void setNickName(const std::string &nn);
		void setPhoneNumber(const std::string &pn);
		void setDarkestSecret(const std::string &ds);
		void getContactInfoFromUser();	
};

#endif