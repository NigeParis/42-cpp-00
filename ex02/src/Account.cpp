/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:48:17 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/10 15:44:22 by nrobinso         ###   ########.fr       */
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

	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts += 1;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created"
	<< std::endl;
	return ;
};

Account::~Account(void) {

	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
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

	int p_amount = _amount;
	_amount += deposit;
	_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits +=1;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << p_amount; 
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
	
};
	
bool	Account::makeWithdrawal( int withdrawal ) {

	int p_amount = _amount;
	if ((p_amount - withdrawal) < 0)
		_nbWithdrawals = 0;
	else {
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;

	}
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << p_amount;
	if (_nbWithdrawals) { 
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals;
	}
	else {
		std::cout << ";withdrawal:refused";
	}
	std::cout << std::endl;
	return (0);
};

int		Account::checkAmount(void) const {	

	return (_amount);
};

void	Account::displayStatus(void) const {

	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals;
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
