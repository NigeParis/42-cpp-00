/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add_tools.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:53:36 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/07 21:47:27 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std :: string  removeAllSpaces(std :: string input) {
	std::string::iterator end_pos = std::remove(input.begin(), input.end(), ' ');
	input.erase(end_pos, input.end());
	return (input);
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
			index = phonebook->get_index(i);
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


int isEmptyInput(PhoneBook *phonebook, std :: string input, int contactIndex) {

	if (!input.size()) {
		std :: cout << "\033[31mError Contact contains an empty field "\
			<< ": Contact has not been saved ! \033[0m" << std :: endl;

		eraseContactInfo(phonebook, contactIndex);
		resetRecordOrder(phonebook, contactIndex);
			
		return (1);
	}
	return (0);
}
 

int isPhoneInput(PhoneBook *phonebook, std :: string input, int contactIndex) {

		
	for (int i = 0; i < static_cast<int>(input.size()); i++) {
		if (!std :: isdigit(input[i])) {
			
			std :: cout << "\033[31mError telephone contains not only numbers "\
						<< ": Contact has not been saved ! \033[0m" << std :: endl;
						
			eraseContactInfo(phonebook, contactIndex);
			resetRecordOrder(phonebook, contactIndex);
			return (1);			
		}		
	}
	return (0);
}

int isNotPrintableInput(PhoneBook *phonebook, std :: string input, int contactIndex) {

		
	for (int i = 0; i < static_cast<int>(input.size()); i++) {
		if (!std :: isprint(input[i])) {
			
			std :: cout << "\033[31mError input contains non-printable characters "\
						<< ": Contact has not been saved ! \033[0m" << std :: endl;
						
			eraseContactInfo(phonebook, contactIndex);
			resetRecordOrder(phonebook, contactIndex);
			return (1);			
		}		
	}
	return (0);
}




int isNotOnlySpaces(PhoneBook *phonebook, std :: string input, int contactIndex) {

	int flag = 1;
		
	for (int i = 0; i < static_cast<int>(input.size()); i++) {
		if (input[i] != ' ')
			flag = 0;
	}
	if (flag) {
	
		std :: cout << "\033[31mError input contains only spaces "\
					<< ": Contact has not been saved ! \033[0m" << std :: endl;
						
		eraseContactInfo(phonebook, contactIndex);
		resetRecordOrder(phonebook, contactIndex);
		return (1);			
	}		
	return (0);
}




