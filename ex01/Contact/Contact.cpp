/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:09:33 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/09/11 12:08:32 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const
{
	return (_firstName);	
}

std::string Contact::getLastName() const
{
	return (_lastName);
}

std::string Contact::getNickName() const
{
	return (_nickName);
}

std::string Contact::getPhoneNumber() const
{
	return (_phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (_darkestSecret);
}

void Contact::setFirstName(const std::string &fn) 
{
	if (!fn.empty())
		this->_firstName = fn;
	else
		std::cout<<"The FirstName Cant be Empty\n";
}

void Contact::setLastName(const std::string &ln)
{
	if (!ln.empty())
		this->_lastName = ln;
	else
		std::cout<<"The NickName Cant be Empty\n";
}

void Contact::setNickName(const std::string &nn)
{
	if (!nn.empty())
		this->_nickName = nn;
	else
		std::cout<<"The NickName Cant be Empty\n";
}

void Contact::setPhoneNumber(const std::string &pn)
{
	if (!pn.empty())
		this->_phoneNumber = pn;
	else
		std::cout<<"The PhoneNumber Cant be Empty\n";
}

void Contact::setDarkestSecret(const std::string &ds)
{
	if (!ds.empty())
		this->_darkestSecret = ds;
	else
		std::cout<<"The NickName Cant be Empty\n";
}