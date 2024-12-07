/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input_phonenbr.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:45:08 by nige42            #+#    #+#             */
/*   Updated: 2024/12/07 18:45:52 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int getPhoneNbr(PhoneBook *phonebook, std :: string input, int contactIndex) {

	phonebook->setPhoneNbr(input, contactIndex);	
	return (0);
}

int  inputPhoneNbr(PhoneBook *phonebook, int contactIndex) {

	std :: string input;

	std :: cout << "\033[36menter phone number\033[0m : ";
	std :: getline(std :: cin, input);	
	if (std :: cin.eof())			
		return (1);
	if (isEmptyInput(phonebook, input, contactIndex))
		return (2);
	input = removeSpaces(input);
	if (input.empty())
		return (2);		
	if (isPhoneInput(phonebook, input, contactIndex))
		return (0);
	getPhoneNbr(phonebook, input, contactIndex);
	return (0);
}
