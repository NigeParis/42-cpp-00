/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/10 15:26:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]) {

	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			std::string str = argv[i];
	
			for (size_t y = 0; y < str.length(); y++) {
				str[y] = std::toupper(static_cast<int>(str[y]));
			}
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
