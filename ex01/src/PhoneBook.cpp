/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/04 17:33:58 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

class PhoneBook {

	public :

		int index;

	PhoneBook(int i);
	~PhoneBook(void);
	
};

PhoneBook :: PhoneBook(int i) : index(i) {

	std :: cout << "phonebook" << std :: endl;

	
};


PhoneBook :: ~PhoneBook(void) {

	std :: cout << "destroy" << std :: endl;

};






int main(int argc, char *argv[]) {
	
	PhoneBook Book[3] = { 0, 1 ,2 };
	if (argc > 1)
		std :: cout << argv[1];
	
	

	
	std :: cout << Book[0].index << std :: endl;
	std :: cout << Book[1].index << std :: endl;
	std :: cout << Book[2].index << std :: endl;
	Book[1].index = 8;
	std :: cout << Book[1].index << std :: endl;


	
	return (0);
}
