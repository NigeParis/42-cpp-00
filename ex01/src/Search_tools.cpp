/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search_tools.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:50:07 by nige42            #+#    #+#             */
/*   Updated: 2024/12/08 17:39:38 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Search_tools.hpp"

int getNbrOfRecords(PhoneBook *phonebook) {

    int count = 0;
 
    for (int i = 0; i < MAX_RECORD; i++) {
        
        if (!(phonebook->getName(i).empty()))
            count++;
    }
    return (count);
}