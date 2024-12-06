/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/06 09:18:07 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main(void) {
	
	PhoneBook phonebook;
	std :: string input;
	
	
	while (1) {
		
		std :: cout << "contact[0] name : " << phonebook.getName(0) << " index : " << phonebook.get_record_order(0) << std :: endl;
		std :: cout << "contact[1] name : " << phonebook.getName(1) << " index : " << phonebook.get_record_order(1) << std :: endl;
		std :: cout << "contact[2] name : " << phonebook.getName(2) << " index : " << phonebook.get_record_order(2) << std :: endl;
		std :: cout << "contact[3] name : " << phonebook.getName(3) << " index : " << phonebook.get_record_order(3) << std :: endl;
		std :: cout << "contact[4] name : " << phonebook.getName(4) << " index : " << phonebook.get_record_order(4) << std :: endl;
		std :: cout << "contact[5] name : " << phonebook.getName(5) << " index : " << phonebook.get_record_order(5) << std :: endl;
		std :: cout << "contact[6] name : " << phonebook.getName(6) << " index : " << phonebook.get_record_order(6) << std :: endl;
		std :: cout << "contact[7] name : " << phonebook.getName(7) << " index : " << phonebook.get_record_order(7) << std :: endl;
		std :: cout << "PhoneBook : ";
		std :: getline(std :: cin, input);
	

	
		if (input == "ADD")
			if (add(&phonebook))
				break ;
		if (input == "EXIT")     
			break ;
		
	}


	
	// phonebook.set_record_order(1, 5);
	// phonebook.set_record_order(8, 5);

	

	


	
	std :: cout << "contact nbr : " << phonebook.get_index(0) << " index : " << phonebook.get_record_order(1) << std :: endl;
	std :: cout << "contact nbr : " << phonebook.get_index(1) << " index : " << phonebook.get_record_order(2) << std :: endl;
	std :: cout << "contact nbr : " << phonebook.get_index(2) << " index : " << phonebook.get_record_order(3) << std :: endl;
	std :: cout << "contact nbr : " << phonebook.get_index(3) << " index : " << phonebook.get_record_order(4) << std :: endl;
	std :: cout << "contact nbr : " << phonebook.get_index(4) << " index : " << phonebook.get_record_order(5) << std :: endl;
	std :: cout << "contact nbr : " << phonebook.get_index(5) << " index : " << phonebook.get_record_order(6) << std :: endl;
	std :: cout << "contact nbr : " << phonebook.get_index(6) << " index : " << phonebook.get_record_order(7) << std :: endl;
	std :: cout << "contact nbr : " << phonebook.get_index(7) << " index : " << phonebook.get_record_order(8) << std :: endl;


	
	return (0);
}
