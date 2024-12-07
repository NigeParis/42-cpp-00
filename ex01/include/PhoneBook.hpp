/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:07:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/07 23:15:01 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

#ifndef MAX_RECORD
#define  MAX_RECORD 8
#endif

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

		Contact contact[MAX_RECORD];
};

#endif
