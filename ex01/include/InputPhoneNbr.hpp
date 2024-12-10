/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputPhoneNbr.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 22:36:22 by nige42            #+#    #+#             */
/*   Updated: 2024/12/09 11:32:38 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_PHONENBR_HPP
#define INPUT_PHONENBR_HPP

#include "PhoneBook.hpp"
#include "AddTools.hpp"

int getPhoneNbr(PhoneBook *phonebook, std::string input, int contactIndex);
int inputPhoneNbr(PhoneBook *phonebook, int contactIndex);

#endif