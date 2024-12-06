/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/06 16:04:47 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook :: PhoneBook(void) {
	for (int i = 0; i < 8; i++) {
		PhoneBook :: contact[i].setRecordNbr(-1);
		PhoneBook :: contact[i].set_index(i);
	}
};


PhoneBook :: ~PhoneBook(void) {
	std :: cout << "destroy" << std :: endl;
};


int PhoneBook :: getRecordOrder(int i) {
	return (contact[i].getRecordNbr());
};


void PhoneBook :: setRecordOrder(int index, int new_index) {

	PhoneBook :: contact[index].setRecordNbr(new_index);
	return ;
};


int PhoneBook :: get_index(int index) {
	
	return (contact[index].getContactIndex());
};

void PhoneBook :: setName(std :: string input, int index) {
	
	if (index < 0)
		return ;
	PhoneBook :: contact[index].setName(input);	
};

std :: string PhoneBook :: getName(int index) {
		
	return (contact[index].getName());	
};


void PhoneBook :: setLastName(std :: string input, int index) {
	
	if (index < 0)
		return ;
	PhoneBook :: contact[index].setLastName(input);	
};

std :: string PhoneBook :: getLastName(int index) {
		
	return (contact[index].getLastName());	
};


void PhoneBook :: setNickName(std :: string input, int index) {
	
	if (index < 0)
		return ;
	PhoneBook :: contact[index].setNickName(input);	
};

std :: string PhoneBook :: getNickName(int index) {
		
	return (contact[index].getNickName());	
};

void PhoneBook :: setPhoneNbr(std :: string input, int index) {
	
	if (index < 0)
		return ;
	PhoneBook :: contact[index].setPhoneNbr(input);	
};

std :: string PhoneBook :: getPhoneNbr(int index) {
		
	return (contact[index].getPhoneNbr());	
};
