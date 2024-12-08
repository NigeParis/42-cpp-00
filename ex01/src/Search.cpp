/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:36:50 by nige42            #+#    #+#             */
/*   Updated: 2024/12/08 19:49:11 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Search.hpp"


// std::string formatOutput(std::string input, int i) {

//     if (input.size() >= 10) {

    
//     }




    
// }




void display(PhoneBook *phonebook, int i) {
	
    std::string name;

        
    //name = formatOutput(phonebook, i);

	std :: cout << "|    [" << i <<"]~    | " << phonebook->getName(i) <<  " lastname : " \
		<< phonebook->getLastName(i) << " nick name : " << phonebook->getNickName(i) \
		<< std :: endl;
    std::cout << "|------------|------------|------------|------------|" << std::endl;    
    
}



int search(PhoneBook *phonebook, std :: string input) {

    int nbrOfRecords; 

    if (input == "SEARCH") {

        nbrOfRecords = getNbrOfRecords(phonebook);
        if (nbrOfRecords == 0)
            return (0);

        displayColumnHead();
        for (int i = 0; i < nbrOfRecords; i++) {
            
            
            display(phonebook, i);

            
        }


    }
    return (0);
}