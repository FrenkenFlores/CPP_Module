/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:47:03 by fflores           #+#    #+#             */
/*   Updated: 2021/03/15 15:12:24 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = Account::getNbAccounts();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ';' << "created" << std::endl;
	return ;
}

Account::~Account(){
	std::cout << "index:" << this->_accountIndex << ";amount" << this->_amount << ';' << "closed" << std::endl;
	return ;
}

int	Account::getNbAccounts( void ){
	return _nbAccounts++;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ){
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() <<  ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return ;
}