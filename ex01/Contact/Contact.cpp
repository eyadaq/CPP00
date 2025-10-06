/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:09:33 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/09/17 10:04:45 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

	std::string Contact::getFirstName() const
    {
        return _firstName;
    }
    
	std::string Contact::getLastName() const
    {
        return _lastName;
    }

	std::string Contact::getNickName() const
    {
        return _nickName;
    }

	std::string Contact::getPhoneNumber() const
    {
        return _phoneNumber;
    }

	std::string Contact::getDarkestSecret() const   
    {
        return _darkestSecret;  
    }

    void Contact::_getUserInput(std::string &input, const std::string prompt)
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        while (input.empty())
        {
            std::cout << "Input cannot be empty. Please try again." << std::endl;
            std::cout << prompt;
            std::getline(std::cin, input);
        }
    }

    void Contact::setConstactDetails()
    {
        _getUserInput(_firstName, "Enter First Name: ");
        _getUserInput(_lastName, "Enter Last Name: ");
        _getUserInput(_nickName, "Enter Nick Name: ");
        _getUserInput(_phoneNumber, "Enter Phone Number: ");
        _getUserInput(_darkestSecret, "Enter Darkest Secret: ");
    }
