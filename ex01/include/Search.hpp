/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:37:26 by nige42            #+#    #+#             */
/*   Updated: 2024/12/09 16:06:43 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCH_HPP
#define SEARCH_HPP

#include "PhoneBook.hpp"
#include "SearchTools.hpp"
#include "AddTools.hpp"
#include <stdlib.h>

int search(PhoneBook *phonebook, std::string input);

#endif