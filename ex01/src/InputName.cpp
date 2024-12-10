/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputName.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:53:57 by nige42            #+#    #+#             */
/*   Updated: 2024/12/09 10:43:17 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InputName.hpp"

static int getName(PhoneBook *phonebook, std::string input, int contactIndex) {

	if (input.empty())
		return (1);
	phonebook->setName(input, contactIndex);	
	return (0);
}

int  inputName(PhoneBook *phonebook, int contactIndex) {

	std::string input;

	std::cout << "\033[34menter name\033[0m : ";
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
	input = addHyphen(input);

	getName(phonebook, input, contactIndex);
	return (0);
}
