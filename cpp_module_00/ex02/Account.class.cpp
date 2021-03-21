/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:47:03 by fflores           #+#    #+#             */
/*   Updated: 2021/03/15 16:12:27 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = Account::getNbAccounts();

	std::time_t t = std::time(NULL);
	std::tm *timer = std::localtime(&t);
	std::cout << '[' << timer->tm_year + 1900 << timer->tm_mon + 1 << timer->tm_mday << "_" << timer->tm_hour << timer->tm_min << timer->tm_sec <<  "] ";

	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ';' << "created" << std::endl;
	return ;
}

Account::~Account(){
	std::time_t t = std::time(NULL);
	std::tm *timer = std::localtime(&t);
	std::cout << '[' << timer->tm_year + 1900 << timer->tm_mon + 1 << timer->tm_mday << "_" << timer->tm_hour << timer->tm_min << timer->tm_sec <<  "] ";

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
	std::time_t t = std::time(NULL);
	std::tm *timer = std::localtime(&t);
	std::cout << '[' << timer->tm_year + 1900 << timer->tm_mon + 1 << timer->tm_mday << "_" << timer->tm_hour << timer->tm_min << timer->tm_sec <<  "] ";

	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() <<  ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
	Account::_nbAccounts = 0;
	return ;
}

void Account::displayStatus() const{
	bool nbWithdrawals = 0;
	bool nbDeposits = 0;
	if (this->_nbWithdrawals > 0)
		nbWithdrawals = 1;
	if (this->_nbDeposits > 0)
		nbDeposits = 1;

	std::time_t t = std::time(NULL);
	std::tm *timer = std::localtime(&t);
	std::cout << '[' << timer->tm_year + 1900 << timer->tm_mon + 1 << timer->tm_mday << "_" << timer->tm_hour << timer->tm_min << timer->tm_sec <<  "] ";

	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << nbDeposits <<  ";withdrawals:" << nbWithdrawals << std::endl;
	return ;
}

void Account::makeDeposit( int deposit ){
	int p_amount = this->_amount;
	this->_accountIndex = Account::getNbAccounts();
	this->_nbDeposits = deposit;
	this->_amount += deposit;
	Account::_totalNbDeposits++;

	std::time_t t = std::time(NULL);
	std::tm *timer = std::localtime(&t);
	std::cout << '[' << timer->tm_year + 1900 << timer->tm_mon + 1 << timer->tm_mday << "_" << timer->tm_hour << timer->tm_min << timer->tm_sec <<  "] ";

	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposits:" << this->_nbDeposits <<  ";amount:" << this->_amount << ";nb_deposits:" << 1 << std::endl;
	return ;
}


bool Account::makeWithdrawal ( int withdrawal ){
	int p_amount = this->_amount;
	this->_accountIndex = Account::getNbAccounts();

	std::time_t t = std::time(NULL);
	std::tm *timer = std::localtime(&t);
	std::cout << '[' << timer->tm_year + 1900 << timer->tm_mon + 1 << timer->tm_mday << "_" << timer->tm_hour << timer->tm_min << timer->tm_sec <<  "] ";

	if (p_amount < 50)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal: refused" << std::endl; 
		return false;
	}
	this->_nbWithdrawals = withdrawal;
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << this->_nbWithdrawals <<  ";amount:" << this->_amount << ";nb_withdrawals:" << 1 << std::endl;
	return true;
}

