/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add_tools.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:26:00 by nige42            #+#    #+#             */
/*   Updated: 2024/12/08 11:20:28 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADD_TOOLS_HPP
#define ADD_TOOLS_HPP

#include "PhoneBook.hpp"
#include <cstdlib>

int isNotOnlySpaces(PhoneBook *phonebook, std :: string input, int contactIndex);
int	isNotPhoneNbr(PhoneBook *phonebook, std :: string input, int contactIndex);
int	isEmptyInput(PhoneBook *phonebook, std :: string input, int contactIndex);
int isNotPrintableInput(PhoneBook *phonebook, std :: string input, int contactIndex);
int	nextRecordToAdd(PhoneBook *phonebook);
void clearScreen(void);
std :: string removeAllSpaces(std :: string input);
std :: string removeLeadingSpaces(std :: string input);
std :: string removeEndingSpaces(std::string input);



#endif