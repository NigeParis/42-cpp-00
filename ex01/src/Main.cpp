/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/10 15:01:53 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Search.hpp"
#include "Add.hpp"


int main(void) {
	
	PhoneBook phonebook;
	std::string input;
	
	clearScreen();
	while (1) {
		
		std::cout << "\033[34mEnter commands \"ADD\" \"SEARCH\" or \"EXIT\"\033[0m" << std::endl;
		std::cout << "PhoneBook : ";
		std::getline(std::cin, input);
		if (std::cin.eof())			
			break ;
		clearScreen();
		if(isOnlySpaces(input))
			continue ; 
			
   		input = removeLeadingSpaces(input);
   		input = removeEndingSpaces(input);
		input = convertStrToUpper(input);

		if (input == "ADD" || (input.substr(0, 4) == "ADD "))
			if (add(&phonebook) == 1)
				break ;
		if (input == "SEARCH" || (input.substr(0, 7) == "SEARCH "))
			if (search(&phonebook, input) == 1) {
				break ;
		}
		if (input == "EXIT")     
			break ;
	
	}
	return (0);
}
