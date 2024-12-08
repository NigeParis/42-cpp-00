/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:36:50 by nige42            #+#    #+#             */
/*   Updated: 2024/12/08 17:59:00 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Search.hpp"

void display(PhoneBook *phonebook, int i) {
	
	std :: cout << "contact[" << i <<"] | " << phonebook->getName(i) <<  " lastname : " \
		<< phonebook->getLastName(i) << " nick name : " << phonebook->getNickName(i) \
		<< std :: endl;
}



int search(PhoneBook *phonebook, std :: string input) {

    int nbrOfRecords; 

    if (input == "SEARCH") {

        nbrOfRecords = getNbrOfRecords(phonebook);

        for (int i = 0; i < nbrOfRecords; i++) {
            
            
            display(phonebook, i);

            
        }


    }
    return (0);
}