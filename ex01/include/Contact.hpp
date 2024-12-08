/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:12:47 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/08 10:35:39 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {

	public :
	
		Contact(void);
		~Contact(void);
		
		void set_index(int index);
		void setRecordNbr(int i);
		void setName(std :: string input);
		void setLastName(std :: string input);
		void setNickName(std :: string input);
		void setPhoneNbr(std :: string input);
		void setSecret(std :: string input);
		
		int getContactIndex(void);
		int getRecordNbr(void);
		std :: string getName(void);
		std :: string getLastName(void);
		std :: string getNickName(void);
		std :: string getPhoneNbr(void);
		std :: string getSecret(void);

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
