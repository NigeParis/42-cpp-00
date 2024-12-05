/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:14:06 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/05 18:12:07 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


Contact :: Contact(void) {

	std :: cout << "phonebook" << std :: endl;
	return ;
};


Contact :: ~Contact(void) {

	std :: cout << "destroy" << std :: endl;
	return ;
};

int Contact :: get_record_nbr(void) {

	
	return (last_changed_index);
};

void Contact :: set_record_nbr(int i) {
	last_changed_index = i;
	return ;
};

void Contact :: set_index(int index) {
	
	contact_index = index;
	return ;
};

int Contact :: get_contact_index(void) {
	
	return (contact_index);	
};

void Contact :: set_name(std :: string input) {

	this->name = input;
};

std :: string Contact :: get_name(void) {

	return (this->name);	
};