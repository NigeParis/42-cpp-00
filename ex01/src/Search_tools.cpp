/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search_tools.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:50:07 by nige42            #+#    #+#             */
/*   Updated: 2024/12/08 19:42:13 by nige42           ###   ########.fr       */
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

void displayColumnHead(void) {

    std::cout << "|------------|------------|------------|------------|" << std::endl;
    std::cout << "|   Index:   |  1st Name  |  LastName  |  NickName  |" << std::endl;
    std::cout << "|------------|------------|------------|------------|" << std::endl;    
}

