/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputPhoneNbr.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:45:08 by nige42            #+#    #+#             */
/*   Updated: 2024/12/08 10:52:20 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "InputPhoneNbr.hpp"

static int getPhoneNbr(PhoneBook *phonebook, std::string input, int contactIndex) {

	phonebook->setPhoneNbr(input, contactIndex);	
	return (0);
}

int  inputPhoneNbr(PhoneBook *phonebook, int contactIndex) {

	std::string input;

	std::cout << "\033[36menter phone number\033[0m : ";
	std::getline(std::cin, input);	
	if (std::cin.eof())			
		return (1);
	input = removeAllSpaces(input);
	if (isEmptyInput(phonebook, input, contactIndex))
		return (2);	
	if (isNotPhoneNbr(phonebook, input, contactIndex))
		return (2);
	getPhoneNbr(phonebook, input, contactIndex);
	return (0);
}
