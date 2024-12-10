/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputName.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:12:47 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/09 11:32:40 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_NAME_HPP
#define INPUT_NAME_HPP

#include "PhoneBook.hpp"
#include "AddTools.hpp"

int getName(PhoneBook *phonebook, std::string input, int contactIndex);
int inputName(PhoneBook *phonebook, int contactIndex);

#endif
