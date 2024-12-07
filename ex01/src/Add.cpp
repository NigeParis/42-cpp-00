/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:48:30 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/07 18:14:37 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



static int getLastName(PhoneBook *phonebook, std :: string input, int contactIndex) {

	phonebook->setLastName(input, contactIndex);	
	return (0);
}

static int getNickName(PhoneBook *phonebook, std :: string input, int contactIndex) {

	phonebook->setNickName(input, contactIndex);
	return (0);
}

static int getPhoneNbr(PhoneBook *phonebook, std :: string input, int contactIndex) {

	phonebook->setPhoneNbr(input, contactIndex);	
	return (0);
}







int  inputLastName(PhoneBook *phonebook, int contactIndex) {

	std :: string input;

	std :: cout << "\033[32menter last name\033[0m : ";
	std :: getline(std :: cin, input);	
	if (std :: cin.eof())
		return (1);
	if (isEmptyInput(phonebook, input, contactIndex))
		return (2);
	getLastName(phonebook, input, contactIndex);
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
	getNickName(phonebook, input, contactIndex);
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




 int add(PhoneBook *phonebook)
 
{
	int contactIndex;
	int error;
	
	contactIndex = nextRecordToAdd(phonebook);
	
	if ((error = inputName(phonebook, contactIndex))) {
		return (error);
	}
	if ((error = inputLastName(phonebook, contactIndex))) {
		return (error);
	}
	if ((error = inputNickName(phonebook, contactIndex))) {
		return (error);
	}
	
	if ((error = inputPhoneNbr(phonebook, contactIndex))) {
		return (error);
	}
	
	return (0);
}

