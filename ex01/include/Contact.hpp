/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:12:47 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/05 18:07:32 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP


#include "PhoneBook.hpp"


class Contact {

	public :
	
	Contact(void);
	~Contact(void);
	
	void set_record_nbr(int i);
	void set_index(int index);
	void set_name(std :: string input);
	std :: string get_name(void);
	int get_record_nbr(void);
	int get_contact_index(void);

	private :
	
		int contact_index;
		int last_changed_index;
		std :: string name;
		std :: string lastname;
		std :: string nickname;
		std :: string phone_nbr;
		std :: string secret;
	
};

#endif
