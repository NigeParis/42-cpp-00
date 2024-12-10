/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/10 09:50:42 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"




Account::Account(int initial_deposit) {

	(void) initial_deposit;

};

Account::~Account(void) {


};

int	Account::getNbAccounts( void ) {


	return (0);
};

int	Account::getTotalAmount( void ) {

	return (0);
};
	
	
int	Account::getNbDeposits( void ) {

	return (0);	
};
	
	
int	Account::getNbWithdrawals( void ) {

	return (0);
};
	
	
void	Account::displayAccountsInfos( void ) {
	
	
};



void	Account::makeDeposit( int deposit ) {
	(void)deposit;
	
};
	
bool	Account::makeWithdrawal( int withdrawal ) {\

	(void)withdrawal;


	return (0);
};

int		Account::checkAmount(void) const {	

	return (Account::_amount);
};


void	Account::displayStatus(void) const {

	_displayTimestamp();


};




void	Account::_displayTimestamp( void ) {

	std::time_t now = std::time(NULL);
	std::tm* localtime = std::localtime(&now);
	char time[32];
	std::strftime(time, 32, "[%Y%m%d_%H%M%S]", localtime);	
	std::cout << time << std::endl;
	return ;
};

