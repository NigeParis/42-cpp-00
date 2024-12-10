/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddTools.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:26:00 by nige42            #+#    #+#             */
/*   Updated: 2024/12/09 10:43:53 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADD_TOOLS_HPP
#define ADD_TOOLS_HPP

#include "PhoneBook.hpp"
#include <cstdlib>

int isNotOnlySpaces(PhoneBook *phonebook, std::string input, int contactIndex);
int	isNotPhoneNbr(PhoneBook *phonebook, std::string input, int contactIndex);
int	isEmptyInput(PhoneBook *phonebook, std::string input, int contactIndex);
int isNotPrintableInput(PhoneBook *phonebook, std::string input, int contactIndex);
int	nextRecordToAdd(PhoneBook *phonebook);
void clearScreen(void);
std::string removeAllSpaces(std::string input);
std::string removeLeadingSpaces(std::string input);
std::string removeEndingSpaces(std::string input);
int isOnlySpaces(std::string input);
int isNotAlpha(PhoneBook *phonebook, std::string input, int contactIndex);
std::string capitaliseInput(std::string input);
std::string convertStrToUpper(std::string input);
std::string  removeExtraSpaces(std::string input);
std::string  addHyphen(std::string input);
void eraseContactInfo(PhoneBook *phonebook, int contactIndex);
void resetRecordOrder(PhoneBook *phonebook, int contactIndex);


#endif