/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/08 18:14:04 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Search.hpp"
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

		if(isOnlySpaces(input))
			continue ; 

   		input = removeLeadingSpaces(input);
   		input = removeEndingSpaces(input);

		if (input == "ADD" || (input.substr(0, 4) == "ADD "))
			if (add(&phonebook) == 1)
				break ;
		if (input == "SEARCH" || (input.substr(0, 7) == "SEARCH "))
			if (search(&phonebook, input) == 1)
				break ;
		if (input == "EXIT")     
			break ;


		//debug_display(&phonebook); 
	
	}


	return (0);
}
