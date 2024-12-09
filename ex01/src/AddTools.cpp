/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddTools.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:53:36 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/09 11:10:26 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AddTools.hpp"

std::string  removeAllSpaces(std::string input) {

	std::string result;
	for (size_t i = 0; i < input.size(); i++) {
		if (input[i] != ' ') {
			result += input[i];
		}
	}
	return (result);
}

std::string removeLeadingSpaces(std::string input) {

    std::string::size_type start_pos = input.find_first_not_of(' ');
    return input.substr(start_pos);
}

std::string removeEndingSpaces(std::string input) {

    std::string::size_type start_pos = input.find_last_not_of(' ');
    input.erase(start_pos + 1);
    return (input);
}

static void resetRecordOrder(PhoneBook *phonebook, int contactIndex) {
	
		int index;

		index = phonebook->getRecordOrder(contactIndex);
		index--;
		for (int i = 0; i < MAX_RECORD; i++) {
			phonebook->setRecordOrder(i, index);
		}
}

static void eraseContactInfo(PhoneBook *phonebook, int contactIndex) {

	if (!phonebook->getName(contactIndex).empty())		
			phonebook->setName("", contactIndex);
	if (!phonebook->getLastName(contactIndex).empty())
		phonebook->setLastName("", contactIndex);
	if (!phonebook->getNickName(contactIndex).empty())
		phonebook->setNickName("", contactIndex);
	if (!phonebook->getPhoneNbr(contactIndex).empty())
		phonebook->setPhoneNbr("", contactIndex);
	if (!phonebook->getSecret(contactIndex).empty())
		phonebook->setSecret("", contactIndex);
	
}

int	 nextRecordToAdd(PhoneBook *phonebook) {

	int i = 0;
	int lastRecord;
	int nextRecord;
	int index = -1;

	lastRecord = -1;
	nextRecord = -1;
	while (i < MAX_RECORD) {
		
		if (lastRecord <= phonebook->getRecordOrder(i)) {	

			lastRecord = phonebook->getRecordOrder(i);
			index = phonebook->getIndex(i);
			nextRecord = lastRecord + 1;
			if (nextRecord == MAX_RECORD)
				lastRecord = -1;
			phonebook->setRecordOrder(index, lastRecord + 1);
		}
		i++;
	}
	if (nextRecord == MAX_RECORD)
		nextRecord = 0;
	return (nextRecord);
}


int isEmptyInput(PhoneBook *phonebook, std::string input, int contactIndex) {

	if (!input.size()) {
	
		clearScreen();	
		std::cout << "\033[31mError last input contains an empty field "\
			<< ": Contact has not been saved ! \033[0m" << std::endl;

		eraseContactInfo(phonebook, contactIndex);
		resetRecordOrder(phonebook, contactIndex);
			
		return (1);
	}
	return (0);
}
 

int isNotPhoneNbr(PhoneBook *phonebook, std::string input, int contactIndex) {

		
	for (int i = 0; i < static_cast<int>(input.size()); i++) {
		if (!std::isdigit(input[i])) {
		
			clearScreen();	
			std::cout << "\033[31mError telephone number contains not only numbers "\
						<< ": Contact has not been saved ! \033[0m" << std::endl;
						
			eraseContactInfo(phonebook, contactIndex);
			resetRecordOrder(phonebook, contactIndex);
			return (1);			
		}		
	}
	return (0);
}

int isNotPrintableInput(PhoneBook *phonebook, std::string input, int contactIndex) {

		
	for (int i = 0; i < static_cast<int>(input.size()); i++) {
		if (!std::isprint(input[i])) {
			
			clearScreen();		
			std::cout << "\033[31mError last input contains non-printable characters "\
						<< ": Contact has not been saved ! \033[0m" << std::endl;
						
			eraseContactInfo(phonebook, contactIndex);
			resetRecordOrder(phonebook, contactIndex);
			return (1);			
		}		
	}
	return (0);
}


int isNotOnlySpaces(PhoneBook *phonebook, std::string input, int contactIndex) {
		
	for (std::string::const_iterator ch = input.begin(); ch != input.end(); ch++ ) {
		
		if (*ch != ' ') {
			return (0);
		}
	}
		clearScreen();
		std::cout << "\033[31mError last input contains only spaces "\
					<< ": Contact has not been saved ! \033[0m" << std::endl;
						
		eraseContactInfo(phonebook, contactIndex);
		resetRecordOrder(phonebook, contactIndex);
		return (1);			
}


void clearScreen(void) {

	system("clear");
}


int isOnlySpaces(std::string input) {

	for (std::string::const_iterator ch = input.begin(); ch != input.end(); ch++) {
       if (*ch != ' ') {
			return (0);
       }
    }
	return (1);					
}


int isNotAlpha(PhoneBook *phonebook, std::string input, int contactIndex) {

		
	for (int i = 0; i < static_cast<int>(input.size()); i++) {
		if (!std::isalpha(input[i])) {
			
			if (!std::isspace(input[i])) {
				clearScreen();		
				std::cout << "\033[31mError last input contains non alphabetic characters "\
							<< ": Contact has not been saved ! \033[0m" << std::endl;
						
				eraseContactInfo(phonebook, contactIndex);
				resetRecordOrder(phonebook, contactIndex);
				return (1);
			}			
		}		
	}
	return (0);
}


std::string capitaliseInput(std::string input) {

	std::string::iterator output = input.begin();

	if (std::islower(*output))
		*input.begin() = std::toupper(*input.begin());
	
	
	return (input);
}

std::string convertStrToUpper(std::string input) {

	std::string output;

	for (std::string::iterator ch = input.begin(); ch < input.end(); ch++) {

		if (std::islower(*ch))
			output += std::toupper(*ch);
		else 
			output += *ch;
	}
	return (output);
}

std::string  removeExtraSpaces(std::string input) {

	std::string result;

	for (size_t i = 0; i < input.size(); i++) {
		if (input[i] != ' ') {
			result += input[i];
		}
		else {
			
			result += ' ';
			while (i < input.size()) {

				if (input[i] != ' ') {

					input[i] = std::toupper(input[i]);
					result += input[i];
					break ;
				}
				i++;
			}
		}
	}
	return (result);
}

std::string  addHyphen(std::string input) {

	std::string result;

	for (size_t i = 0; i < input.size(); i++) {
		if (input[i] != ' ') {
			result += input[i];
		}
		else {
			result += '-';			
		}
	}
	return (result);
}

