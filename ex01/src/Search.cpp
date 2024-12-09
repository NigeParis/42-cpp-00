/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:36:50 by nige42            #+#    #+#             */
/*   Updated: 2024/12/09 17:08:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Search.hpp"

int search(PhoneBook *phonebook, std::string input) {

    int nbrOfRecords;
    int findRecord = -1;
    std::string searchstr;
    std::string searchcmd = "SEARCH";

    nbrOfRecords = getNbrOfRecords(phonebook);
    if (input == searchcmd) {
        if (nbrOfRecords == 0)
            return (0);
        displayColumnHead();
        for (int i = 0; i < nbrOfRecords; i++) {
            display(phonebook, i);
        }
        std::cout << std::endl;
        std::cout << "SEARCH : ";
		std::getline(std::cin, searchstr);
		if (std::cin.eof())			
			return (0);
        searchstr = convertStrToUpper(searchstr);
        if (searchstr == "EXIT")     
			return (1) ;
        input += searchstr;
        clearScreen();
    }
    if (input.size() > searchcmd.size()) {

        searchstr = input.substr(searchcmd.size(), input.size()); 
        searchstr = removeLeadingSpaces(searchstr);  
        findRecord = (std::atoi(searchstr.c_str()));
        if ((findRecord > nbrOfRecords) || (findRecord < 1)) {
            putSearchError();
            return (0);
        }
        displayContact(phonebook, (std::atoi(searchstr.c_str()) - 1));
    }
    return (0);
}