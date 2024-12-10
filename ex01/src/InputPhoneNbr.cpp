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
	int	format_correct = false;

	while (!format_correct) {
		std::cout << "\033[36menter phone number\033[0m : ";
		std::getline(std::cin, input);	
		if (std::cin.eof())			
			return (1);
   		input = convertStrToUpper(input);
		if (input == "EXIT")     
			return (1) ;
		input = removeAllSpaces(input);
		if (isEmptyInput(phonebook, input, contactIndex))
			return (2);	
		if (isNotPhoneNbr(phonebook, input, contactIndex))
			return (2);
		if (input.length() == 10) {
			getPhoneNbr(phonebook, input, contactIndex);
			format_correct = true;
		}
		else {
			clearScreen();
			std::cout << "\033[31mError telephone number is an incorrect format ";
			std::cout << ": please enter again\033[0m";
			std::cout << std::endl;
			input = "";
		}
	}
	return (0);
}
