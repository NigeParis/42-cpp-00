/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:12:47 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/09 17:05:41 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {

	public :
	
		Contact(void);
		~Contact(void);
		
		void setIndex(int index);
		void setRecordNbr(int i);
		void setName(std::string input);
		void setLastName(std::string input);
		void setNickName(std::string input);
		void setPhoneNbr(std::string input);
		void setSecret(std::string input);
		
		int getContactIndex(void);
		int getRecordNbr(void);
		std::string getName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNbr(void);
		std::string getSecret(void);

	private :

		int _contact_index;
		int _last_changed_index;
		std::string _name;
		std::string _lastname;
		std::string _nickname;
		std::string _phone_nbr;
		std::string _secret;
	
};

#endif
