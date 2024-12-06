/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:48:30 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/06 17:53:56 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <bits/stdc++.h>

static int getName(PhoneBook *phonebook, std :: string input, int contactIndex) {

	if (input.empty())
		return (1);
	phonebook->setName(input, contactIndex);	
	return (0);
}

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


std :: string  removeSpaces(std :: string input) {
	std::string::iterator end_pos = std::remove(input.begin(), input.end(), ' ');
	input.erase(end_pos, input.end());
	return (input);
}



 int add(PhoneBook *phonebook)
{
	std :: string input;
	int contactIndex;
	
	contactIndex = nextRecordToAdd(phonebook);
	
	std :: cout << "\033[34menter name\033[0m : ";
	std :: getline(std :: cin, input);	
	if (std :: cin.eof())
		return (1);
	if (isEmptyInput(phonebook, input, contactIndex))
		return (0);
	while (getName(phonebook, input, contactIndex));

	std :: cout << "\033[32menter last name\033[0m : ";
	std :: getline(std :: cin, input);	
	if (std :: cin.eof())			
		return (1);
	if (isEmptyInput(phonebook, input, contactIndex))
		return (0);
	while (getLastName(phonebook, input, contactIndex));
	
	std :: cout << "\033[33menter nick name\033[0m : ";
	std :: getline(std :: cin, input);	
	if (std :: cin.eof())			
		return (1);
	if (isEmptyInput(phonebook, input, contactIndex))
		return (0);
	while (getNickName(phonebook, input, contactIndex));

	std :: cout << "\033[36menter phone number\033[0m : ";
	std :: getline(std :: cin, input);	
	if (std :: cin.eof())			
		return (1);
	if (isEmptyInput(phonebook, input, contactIndex))
		return (0);

	input = removeSpaces(input);
	if (input.empty())
		return (0);
	
	std :: cout << "'"<<input<<"'" << std :: endl;	

		
	if (isPhoneInput(phonebook, input, contactIndex))
		return (0);
	while (getPhoneNbr(phonebook, input, contactIndex));

	

			
	return (0);
}

