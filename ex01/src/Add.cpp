/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:48:30 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/07 18:48:04 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int add(PhoneBook *phonebook)
 
{
	int contactIndex;
	int error;
	
	contactIndex = nextRecordToAdd(phonebook);
	
	if ((error = inputName(phonebook, contactIndex))) {
		return (error);
	}
	if ((error = inputLastName(phonebook, contactIndex))) {
		return (error);
	}
	if ((error = inputNickName(phonebook, contactIndex))) {
		return (error);
	}
	
	if ((error = inputPhoneNbr(phonebook, contactIndex))) {
		return (error);
	}
	
	return (0);
}

