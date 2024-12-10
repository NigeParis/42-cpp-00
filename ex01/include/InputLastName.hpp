/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputLastName.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:17:21 by nige42            #+#    #+#             */
/*   Updated: 2024/12/10 15:54:15 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_LASTNAME_HPP
#define INPUT_LASTNAME_HPP

#include "PhoneBook.hpp"
#include "AddTools.hpp"

int getLastName(PhoneBook *phonebook, std::string input, int contactIndex);
int inputLastName(PhoneBook *phonebook, int contactIndex);

#endif