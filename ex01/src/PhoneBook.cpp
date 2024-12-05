/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/05 18:11:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook :: PhoneBook(void) {

	std :: cout << "phonebook" << std :: endl;

	for (int i = 0; i < 8; i++) {
		PhoneBook :: contact[i].set_record_nbr(0);
		PhoneBook :: contact[i].set_index(i);
	}
};


PhoneBook :: ~PhoneBook(void) {

	std :: cout << "destroy" << std :: endl;
};

int PhoneBook :: get_record_order(int i) {

	return (contact[i].get_record_nbr());
};


void PhoneBook :: set_record_order(int index, int new_index) {

	PhoneBook :: contact[index].set_record_nbr(new_index);
	return ;
};


int PhoneBook :: get_index(int index) {
	
	return (contact[index].get_contact_index());
};

void PhoneBook :: setName(std :: string input, int index) {

	PhoneBook :: contact[index].set_name(input);	
};

std :: string PhoneBook :: getName(int index) {
		
	return (contact[index].get_name());	
};
