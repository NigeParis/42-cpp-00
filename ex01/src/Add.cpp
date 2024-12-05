/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:48:30 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/05 18:15:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


static int getName(PhoneBook *phonebook, std :: string input)
{
	if (input.empty())
		return (1);
	phonebook->setName(input, 0);	
	
	return (0);
}




int add(PhoneBook *phonebook)
{
	std :: string input;
	std :: cout << "inside add here function" << std :: endl;

	std :: cin >> input;
	if (input == "EXIT")
		return (1);
	
	while (getName(phonebook, input));
	

		
		
	return (0);
}

