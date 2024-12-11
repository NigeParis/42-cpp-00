/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/11 09:16:21 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int 	Account::_nbAccounts = 0;
int 	Account::_totalAmount = 0;
int 	Account::_totalNbDeposits = 0;
int 	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {

	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts += 1;
	this->_accountIndex = this->_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created"
	<< std::endl;
	return ;
};

Account::~Account(void) {

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed"
	<< std::endl;

};

int	Account::getNbAccounts( void ) {

	return (_nbAccounts);
};

int	Account::getTotalAmount( void ) {

	return (_totalAmount);
};
	
int	Account::getNbDeposits( void ) {

	return (_totalNbDeposits);	
};
	
int	Account::getNbWithdrawals( void ) {

	return (_totalNbWithdrawals);
};
	
void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts(); 
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;

};

void	Account::makeDeposit( int deposit ) {

	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	this->_totalAmount += deposit;
	this->_totalNbDeposits +=1;

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << p_amount; 
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	
};
	
bool	Account::makeWithdrawal( int withdrawal ) {

	int p_amount = this->_amount;
	if ((p_amount - withdrawal) < 0)
		this->_nbWithdrawals = 0;
	else {
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals += 1;

	}
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << p_amount;
	if (this->_nbWithdrawals) { 
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
	}
	else {
		std::cout << ";withdrawal:refused";
	}
	std::cout << std::endl;
	return (0);
};

int		Account::checkAmount(void) const {	

	return (this->_amount);
};

void	Account::displayStatus(void) const {

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;

};

void	Account::_displayTimestamp( void ) {

	std::time_t now = std::time(NULL);
	std::tm* localtime = std::localtime(&now);
	char time[32];
	std::strftime(time, 32, "[%Y%m%d_%H%M%S]", localtime);	
	std::cout << time;
	return ;
};
