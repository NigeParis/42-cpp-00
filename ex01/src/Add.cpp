/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:48:30 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/08 11:00:57 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Add.hpp"

int add(PhoneBook *phonebook) {
	int contactIndex;
	int error;
	
	contactIndex = nextRecordToAdd(phonebook);
	
	clearScreen();
	if ((error = inputName(phonebook, contactIndex))) {
		return (error);
	}
	clearScreen();
	if ((error = inputLastName(phonebook, contactIndex))) {
		return (error);
	}
	clearScreen();
	if ((error = inputNickName(phonebook, contactIndex))) {
		return (error);
	}
	clearScreen();
	if ((error = inputPhoneNbr(phonebook, contactIndex))) {
		return (error);
	}
	clearScreen();
	if ((error = inputSecret(phonebook, contactIndex))) {
		return (error);
	}
	clearScreen();

	
	return (0);
}

