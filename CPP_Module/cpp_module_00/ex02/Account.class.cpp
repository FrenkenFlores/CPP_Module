/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:47:03 by fflores           #+#    #+#             */
/*   Updated: 2021/03/13 18:03:31 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

Account::Account( int initial_deposit ){
    this->_amount = initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ';' << "created" << std::endl;
    return ;
}

Account::~Account(){
    std::cout << "index:" << this->_accountIndex << ";amount" << this->_amount << ';' << "closed" << std::endl;
    return ;
}

