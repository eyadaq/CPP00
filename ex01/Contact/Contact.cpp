/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:09:33 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/10/07 20:17:57 by eaqrabaw         ###   ########.fr       */
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

    bool Contact::_getUserInput(std::string &input, const std::string prompt)
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (std::cin.eof())
            return false;
        while (input.empty())
        {
            std::cout << "Input cannot be empty. Please try again." << std::endl;
            std::cout << prompt;
            std::getline(std::cin, input);
            if (std::cin.eof())
                return false;
        }
        return true;
    }

    bool Contact::setContactDetails()
    {
        if (!_getUserInput(_firstName, "Enter First Name: "))
            return false;
        if (!_getUserInput(_lastName, "Enter Last Name: "))
            return false;
        if (!_getUserInput(_nickName, "Enter Nick Name: "))
            return false;
        if (!_getUserInput(_phoneNumber, "Enter Phone Number: "))
            return false;
        if (!_getUserInput(_darkestSecret, "Enter Darkest Secret: "))
            return false;
        return true;
    }
