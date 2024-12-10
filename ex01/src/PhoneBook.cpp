/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/10 14:46:18 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "AddTools.hpp"

PhoneBook :: PhoneBook(void) {
	for (int i = 0; i < MAX_RECORD; i++) {
		PhoneBook::_contact[i].setRecordNbr(-1);
		PhoneBook::_contact[i].setIndex(i);
	}
};

PhoneBook :: ~PhoneBook(void) {
	clearScreen();
};

int PhoneBook :: getRecordOrder(int i) {
	return (_contact[i].getRecordNbr());
};

void PhoneBook :: setRecordOrder(int index, int new_index) {

	PhoneBook::_contact[index].setRecordNbr(new_index);
	return ;
};

int PhoneBook :: getIndex(int index) {
	
	return (_contact[index].getContactIndex());
};

void PhoneBook :: setName(std::string input, int index) {
	
	if (index < 0)
		return ;
	PhoneBook::_contact[index].setName(input);	
};

std::string PhoneBook :: getName(int index) {
		
	return (_contact[index].getName());	
};

void PhoneBook :: setLastName(std::string input, int index) {
	
	if (index < 0)
		return ;
	PhoneBook::_contact[index].setLastName(input);	
};

std::string PhoneBook :: getLastName(int index) {
		
	return (_contact[index].getLastName());	
};

void PhoneBook :: setNickName(std::string input, int index) {
	
	if (index < 0)
		return ;
	PhoneBook::_contact[index].setNickName(input);	
};

std::string PhoneBook :: getNickName(int index) {
		
	return (_contact[index].getNickName());	
};

void PhoneBook :: setPhoneNbr(std::string input, int index) {
	
	if (index < 0)
		return ;
	PhoneBook::_contact[index].setPhoneNbr(input);	
};

std::string PhoneBook :: getPhoneNbr(int index) {
		
	return (_contact[index].getPhoneNbr());	
};

void PhoneBook :: setSecret(std::string input, int index) {
	
	if (index < 0)
		return ;
	PhoneBook::_contact[index].setSecret(input);	
};

std::string PhoneBook :: getSecret(int index) {
		
	return (_contact[index].getSecret());	
};
