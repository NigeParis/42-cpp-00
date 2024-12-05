/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:07:01 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/05 16:59:35 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"


class PhoneBook {

	public :

	PhoneBook(void);
	~PhoneBook(void);
	
	void set_record_order(int index, int new_index);
	void setName(std :: string input, int index);
	int get_record_order(int contact_index);
	int get_index(int index);
	private :

	Contact contact[8];
};


int add(PhoneBook *phonebook);

#endif
