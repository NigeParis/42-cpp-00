/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:48:30 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/06 10:51:32 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int	 nextRecordToAdd(PhoneBook *phonebook) {

	int i = 0;
	int nextRecord;
	int index = -1;

	nextRecord = -1;
	while (i < 8) {
		
		if (nextRecord <= phonebook->get_record_order(i)) {	

			nextRecord = phonebook->get_record_order(i);
			index = phonebook->get_index(i);
			if (nextRecord + 1 == 8)
				nextRecord = -1;
			phonebook->set_record_order(index, nextRecord + 1);
		}
		i++;
	}
	nextRecord++;
	if (nextRecord == 8)
		nextRecord = 0;
	return (nextRecord);
}




static int getName(PhoneBook *phonebook, std :: string input) {

	if (input.empty())
		return (1);
	phonebook->setName(input, nextRecordToAdd(phonebook));	
	
	return (0);
}




int add(PhoneBook *phonebook)
{
	std :: string input;
	std :: cout << "inside add here function" << std :: endl;

	std :: cin >> input;
	if (input == "EXIT")
		return (1);
	
	while (getName(phonebook, input));
	

		
		
	return (0);
}

