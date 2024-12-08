/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:14:06 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/08 11:13:19 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Add_tools.hpp"

Contact :: Contact(void) {
	return ;
};

Contact :: ~Contact(void) {
	clearScreen();
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

void Contact :: setSecret(std :: string input) {

	this->secret = input;
};

std :: string Contact :: getSecret(void) {

	return (this->secret);	
};
