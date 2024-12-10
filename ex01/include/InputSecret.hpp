/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputSecret.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 10:30:15 by nige42            #+#    #+#             */
/*   Updated: 2024/12/10 15:53:12 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_SECRET_HPP
#define INPUT_SECRET_HPP

#include "PhoneBook.hpp"
#include "AddTools.hpp"

int getSecret(PhoneBook *phonebook, std::string input, int contactIndex);
int inputSecret(PhoneBook *phonebook, int contactIndex);

#endif