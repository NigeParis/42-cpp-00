/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputLastName.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:37:01 by nige42            #+#    #+#             */
/*   Updated: 2024/12/09 11:11:43 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InputLastName.hpp"

static int getLastName(PhoneBook *phonebook, std::string input, int contactIndex) {

	phonebook->setLastName(input, contactIndex);	
	return (0);
}

int  inputLastName(PhoneBook *phonebook, int contactIndex) {

	std::string input;

	std::cout << "\033[32menter last name\033[0m : ";
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
	if (isNotAlpha(phonebook, input, contactIndex))
		return (2);
	input = capitaliseInput(input);
	input = removeExtraSpaces(input);

	getLastName(phonebook, input, contactIndex);
	return (0);
}
