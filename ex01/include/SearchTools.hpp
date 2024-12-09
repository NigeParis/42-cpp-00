/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SearchTools.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:50:45 by nige42            #+#    #+#             */
/*   Updated: 2024/12/09 16:59:31 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCH_TOOLS_HPP
#define SEARCH_TOOLS_HPP

#include "PhoneBook.hpp"
#include "AddTools.hpp"
#include <iomanip>

int getNbrOfRecords(PhoneBook *phoneBook);
void displayColumnHead(void);
void display(PhoneBook *phonebook, int i);
void displayContact(PhoneBook *phonebook, int i);
void putSearchError(void);
std::string formatOutput(std::string input);
std::string formatTelephone(std::string input);

#endif