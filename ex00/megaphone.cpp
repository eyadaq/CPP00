/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 07:44:24 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/05/22 08:05:30 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1) 
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; ++i)
	{
        std::string arg(argv[i]);
        for (std::string::size_type j = 0; j < arg.length(); ++j)
            std::cout << static_cast<char>(std::toupper(arg[j]));
        if (i < argc - 1)
            std::cout << " ";
    }

    std::cout << std::endl;
    return 0;
}