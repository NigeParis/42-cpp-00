/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:14:06 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/06 15:41:25 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact :: Contact(void) {
	return ;
};

Contact :: ~Contact(void) {
	std :: cout << "destroy" << std :: endl;
	return ;
};

int Contact :: getRecordNbr(void) {
	return (this->last_changed_index);
};

void Contact :: setRecordNbr(int i) {
	this->last_changed_index = i;
	return ;
};

void Contact :: set_index(int index) {
	
	this->contact_index = index;
	return ;
};

int Contact :: getContactIndex(void) {
	
	return (this->contact_index);	
};

void Contact :: setName(std :: string input) {

	this->name = input;
};

std :: string Contact :: getName(void) {

	return (this->name);	
};


void Contact :: setLastName(std :: string input) {

	this->lastname = input;
};

std :: string Contact :: getLastName(void) {

	return (this->lastname);	
};

void Contact :: setNickName(std :: string input) {

	this->nickname = input;
};

std :: string Contact :: getNickName(void) {

	return (this->nickname);	
};

void Contact :: setPhoneNbr(std :: string input) {
	
	this->phone_nbr = input;
};

std :: string Contact :: getPhoneNbr(void) {

	return (this->phone_nbr);	
};