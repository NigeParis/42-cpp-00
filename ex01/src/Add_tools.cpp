/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add_tools.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:53:36 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/06 15:56:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

	int index;
	
	if (!input.size()) {
		std :: cout << "\033[31mError Contact contains an empty field "\
			<< ": Contact has been saved ! \033[0m" << std :: endl;

		if (!phonebook->getName(contactIndex).empty())		
			phonebook->setName("", contactIndex);
		if (!phonebook->getLastName(contactIndex).empty())
			phonebook->setLastName("", contactIndex);
		if (!phonebook->getNickName(contactIndex).empty())
			phonebook->setNickName("", contactIndex);
		if (!phonebook->getPhoneNbr(contactIndex).empty())
			phonebook->setPhoneNbr("", contactIndex);
		
		index = phonebook->getRecordOrder(contactIndex);
		index--;
		for (int i = 0; i < MAX_RECORD; i++) {
			phonebook->setRecordOrder(i, index);
		}
			
		return (1);
	}
	return (0);
}
 

int isPhoneInput(PhoneBook *phonebook, std :: string input, int contactIndex) {

	int index;
		
	for (int i = 0; i < static_cast<int>(input.size()); i++) {
		if (!isdigit(input[i])){
			std :: cout << "\033[31mError telephone contains not only numbers "\
						<< ": Contact has been saved ! \033[0m" << std :: endl;
			if (!phonebook->getName(contactIndex).empty())		
				phonebook->setName("", contactIndex);
			if (!phonebook->getLastName(contactIndex).empty())
				phonebook->setLastName("", contactIndex);
			if (!phonebook->getNickName(contactIndex).empty())
				phonebook->setNickName("", contactIndex);
			if (!phonebook->getPhoneNbr(contactIndex).empty())
				phonebook->setPhoneNbr("", contactIndex);
		
			index = phonebook->getRecordOrder(contactIndex);
			index--;
			for (int i = 0; i < MAX_RECORD; i++) {
				phonebook->setRecordOrder(i, index);
			}	
		return (1);			
		}		
	}
	return (0);
}