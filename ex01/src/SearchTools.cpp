/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SearchTools.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:50:07 by nige42            #+#    #+#             */
/*   Updated: 2024/12/08 19:42:13 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SearchTools.hpp"

int getNbrOfRecords(PhoneBook *phonebook) {

    int count = 0;
 
    for (int i = 0; i < MAX_RECORD; i++) {
        
        if (!(phonebook->getName(i).empty()))
            count++;
    }
    return (count);
}

void displayColumnHead(void) {

    std::cout << "|------------|------------|------------|------------|" << std::endl;
    std::cout << "|   Index:   |  1st Name  |  LastName  |  NickName  |" << std::endl;
    std::cout << "|------------|------------|------------|------------|" << std::endl;    
}

void display(PhoneBook *phonebook, int i) {
	
    std::string name;
    std::string lastname;
    std::string nickname;

        
    name = formatOutput(phonebook->getName(i));
    lastname = formatOutput(phonebook->getLastName(i));
    nickname = formatOutput(phonebook->getNickName(i));

	std::cout << "| " << std::setw(10) << std::setfill('0') 
        << i + 1 << " | " << name 
        <<  " | " << lastname 
        << " | " << nickname
        << " |"
		<< std::endl;
    std::cout << "|------------|------------|------------|------------|" << std::endl;    
    
}

std::string formatOutput(std::string input) {

    std::string output;
    if (input.size() == 10)
        return (input);

    if (input.size() > 10) {
        
        output = input.substr(0, 9);    
        output += '.';
        return (output);
    }
    else {
        
        for (size_t i = input.size(); i < 10; i++)
            output += ' ';
        output += input;
        
    }
    return (output);
}

void putSearchError(void) {

    clearScreen();
	std::cout << "\033[31mError contact not found "\
		<< ": Contact can not be displayed ! \033[0m" << std::endl;
}

std::string formatTelephone(std::string input) {

    std::string output;

    for (size_t i = 0; i < input.length(); i++) {

        if ((i % 2 == 0) && i != 0)
            output += ' ';
        output += input[i];
    }
    return (output);
}

void displayContact(PhoneBook *phonebook, int i) {
	
    std::string name;
    std::string lastname;
    std::string nickname;
    std::string telephone;
    std::string secret;

    name = phonebook->getName(i);
    lastname = phonebook->getLastName(i);
    nickname = phonebook->getNickName(i);
    secret = phonebook->getSecret(i);
    telephone = formatTelephone(phonebook->getPhoneNbr(i));

	std::cout << "Contact   : \"" << i + 1 << "\"" 	<< std::endl;
    std::cout << "Name      : " << "\"" << name << "\"" << std::endl;
    std::cout << "Last name : " << "\"" << lastname << "\"" << std::endl; 
    std::cout << "Nick name : " << "\"" << nickname << "\"" << std::endl;
    std::cout << "Telephone : " << "\"" << telephone << "\"" << std::endl;
    std::cout << "Secret    : " << "\"" << secret << "\"" << std::endl;
    std::cout << std::endl;
}
