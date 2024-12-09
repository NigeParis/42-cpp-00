/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputSecret.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 10:29:23 by nige42            #+#    #+#             */
/*   Updated: 2024/12/08 11:17:24 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InputSecret.hpp"

static int getSecret(PhoneBook *phonebook, std::string input, int contactIndex) {

	if (input.empty())
		return (1);
	phonebook->setSecret(input, contactIndex);	
	return (0);
}

int  inputSecret(PhoneBook *phonebook, int contactIndex) {

	std::string input;

	std::cout << "\033[41menter secret\033[0m : ";
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

	getSecret(phonebook, input, contactIndex);
	return (0);
}
