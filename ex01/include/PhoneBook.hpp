/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:07:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/06 16:05:07 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

#include <stdio.h>

#define  MAX_RECORD 8



class PhoneBook {

	public :

		PhoneBook(void);
		~PhoneBook(void);
		
		void setRecordOrder(int index, int new_index);
		void setName(std :: string input, int index);
		void setLastName(std :: string input, int index);
		void setNickName(std :: string input, int index);
		void setPhoneNbr(std :: string input, int index);

		int get_index(int index);
		int getRecordOrder(int contact_index);
		std :: string getName(int index);
		std :: string getLastName(int index);
		std :: string getNickName(int index);
		std :: string getPhoneNbr(int index);

	private :

		Contact contact[8];
};


int	add(PhoneBook *phonebook);
int	isPhoneInput(PhoneBook *phonebook, std :: string input, int contactIndex);
int	isEmptyInput(PhoneBook *phonebook, std :: string input, int contactIndex);
int	nextRecordToAdd(PhoneBook *phonebook);


#endif
