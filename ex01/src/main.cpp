/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/07 23:15:09 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Add.hpp"

int main(void) {
	
	PhoneBook phonebook;
	
	std :: string input;
	
	
	while (1) {
		

		std :: cout << "PhoneBook : ";
		std :: getline(std :: cin, input);
		if (std :: cin.eof())			
			break ;
	
		if (input == "ADD")
			if (add(&phonebook) == 1)
				break ;
		if (input == "EXIT")     
			break ;



		for (int i = 0; i < 8; i++) 
			std :: cout << "contact[" << i <<"] name : " << phonebook.getName(i) <<  " lastname : " \
			<< phonebook.getLastName(i) << " nick name : " << phonebook.getNickName(i) \
			<< " phone num : " << phonebook.getPhoneNbr(i) \
			<< " index : " << phonebook.getRecordOrder(i) << std :: endl;
	}


	return (0);
}
