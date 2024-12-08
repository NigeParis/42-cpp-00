/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/08 11:30:20 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Add.hpp"

void debug_display(PhoneBook *phonebook) {
	
		for (int i = 0; i < 8; i++) 
			std :: cout << "contact[" << i <<"] name : " << phonebook->getName(i) <<  " lastname : " \
			<< phonebook->getLastName(i) << " nick name : " << phonebook->getNickName(i) \
			<< " phone num : " << phonebook->getPhoneNbr(i) \
			<< " secret : " << phonebook->getSecret(i) \
			<< " index : " << phonebook->getRecordOrder(i) << std :: endl;
}



int main(void) {
	
	PhoneBook phonebook;
	
	std :: string input;
	
	clearScreen();
	while (1) {
		

		std :: cout << "PhoneBook : ";
		std :: getline(std :: cin, input);
		if (std :: cin.eof())			
			break ;
		clearScreen();
	
		if (input == "ADD")
			if (add(&phonebook) == 1)
				break ;
		if (input == "EXIT")     
			break ;



		debug_display(&phonebook); 
	
	}


	return (0);
}
