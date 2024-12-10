/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputNickName.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:41:32 by nige42            #+#    #+#             */
/*   Updated: 2024/12/09 11:12:21 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InputNickName.hpp"

int getNickName(PhoneBook *phonebook, std::string input, int contactIndex) {

	phonebook->setNickName(input, contactIndex);
	return (0);
}

int  inputNickName(PhoneBook *phonebook, int contactIndex) {

	std::string input;

	std::cout << "\033[33menter nick name\033[0m : ";
	std::getline(std::cin, input);	
	if (std::cin.eof())
		return (1);
	if (isEmptyInput(phonebook, input, contactIndex))
		return (2);
    if (isNotPrintableInput(phonebook, input, contactIndex))
        return (2);
    if (isNotOnlySpaces(phonebook, input, contactIndex))
        return (2);
    input = removeLeadingSpaces(input);
    input = removeEndingSpaces(input);
	getNickName(phonebook, input, contactIndex);
	return (0);
}

