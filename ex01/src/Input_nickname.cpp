/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input_nickname.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:41:32 by nige42            #+#    #+#             */
/*   Updated: 2024/12/07 21:45:18 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int getNickName(PhoneBook *phonebook, std :: string input, int contactIndex) {

	phonebook->setNickName(input, contactIndex);
	return (0);
}

int  inputNickName(PhoneBook *phonebook, int contactIndex) {

	std :: string input;

	std :: cout << "\033[33menter nick name\033[0m : ";
	std :: getline(std :: cin, input);	
	if (std :: cin.eof())
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

