/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:14:06 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/09 17:05:41 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "AddTools.hpp"

Contact :: Contact(void) {
	return ;
};

Contact :: ~Contact(void) {
	clearScreen();
	return ;
};

int Contact :: getRecordNbr(void) {
	return (this->_last_changed_index);
};

void Contact :: setRecordNbr(int i) {
	this->_last_changed_index = i;
	return ;
};

void Contact :: setIndex(int index) {
	
	this->_contact_index = index;
	return ;
};

int Contact :: getContactIndex(void) {
	
	return (this->_contact_index);	
};

void Contact :: setName(std::string input) {

	this->_name = input;
};

std::string Contact :: getName(void) {

	return (this->_name);	
};


void Contact :: setLastName(std::string input) {

	this->_lastname = input;
};

std::string Contact :: getLastName(void) {

	return (this->_lastname);	
};

void Contact :: setNickName(std::string input) {

	this->_nickname = input;
};

std::string Contact :: getNickName(void) {

	return (this->_nickname);	
};

void Contact :: setPhoneNbr(std::string input) {
	
	this->_phone_nbr = input;
};

std::string Contact :: getPhoneNbr(void) {

	return (this->_phone_nbr);	
};

void Contact :: setSecret(std::string input) {

	this->_secret = input;
};

std::string Contact :: getSecret(void) {

	return (this->_secret);	
};
