/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:12:25 by fflores           #+#    #+#             */
/*   Updated: 2021/03/13 17:43:51 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(){
	this->empty = true;
	this->_firstName.clear();
	this->_lastName.clear();
	this->_nickName.clear();
	this->_login.clear();
	this->_postalAddress.clear();
	this->_emailAddress.clear();
	this->_phoneNumber.clear();
	this->_birthdayDate.clear();
	this->_favoriteMeal.clear();
	this->_underwearColor.clear();
	this->_darkestSecret.clear();
	return ;
}

Contact::~Contact(){
	return ;
}

std::string Contact::getVariable( std::string str ) const{
	if (str == "_firstName")
		return (this->_firstName);
	else if (str == "_lastName")
		return (this->_lastName);
	else if (str == "_nickName")
		return (this->_nickName);
	else if (str == "_login")
		return (this->_login);
	else if (str == "_postalAddress")
		return (this->_postalAddress);
	else if (str == "_emailAddress")
		return (this->_emailAddress);
	else if (str == "_phoneNumber")
		return (this->_phoneNumber);
	else if (str == "_birthdayDate")
		return (this->_birthdayDate);
	else if (str == "_favoriteMeal")
		return (this->_favoriteMeal);
	else if (str == "_underwearColor")
		return (this->_underwearColor);
	else if (str == "_darkestSecret")
		return (this->_darkestSecret);
	else
		return ("");
}

void	Contact::setVariable( std::string str, std::string setValue )
{
	if (str == "_firstName")
	{
		this->_firstName = setValue;
		if (setValue.length() > 10)
		{
			this->_firstName.erase(9,(this->_firstName.length() - 9));
			this->_firstName.insert(this->_firstName.begin()+9, '.');
		}
		return;
	}
	else if (str == "_lastName")
	{
		this->_lastName = setValue;
		if (setValue.length() > 10)
		{
			this->_lastName.erase(9,(this->_lastName.length() - 9));
			this->_lastName.insert(this->_lastName.begin()+9, '.');
		}
		return;
	}
	else if (str == "_nickName")
	{
		this->_nickName = setValue;
		if (setValue.length() > 10)
		{
			this->_nickName.erase(9,(this->_nickName.length() - 9));
			this->_nickName.insert(this->_nickName.begin()+9, '.');
		}
		return;
	}
	else if (str == "_login")
	{
		this->_login = setValue;
		return;
	}
	else if (str == "_postalAddress")
	{
		this->_postalAddress = setValue;
		return;
	}
	else if (str == "_emailAddress")
	{
		this->_emailAddress = setValue;
		return;
	}
	else if (str == "_phoneNumber")
	{
		this->_phoneNumber = setValue;
		return;
	}
	else if (str == "_birthdayDate")
	{
		this->_birthdayDate = setValue;
		return;
	}
	else if (str == "_favoriteMeal")
	{
		this->_favoriteMeal = setValue;
		return;
	}
	else if (str == "_underwearColor")
	{
		this->_underwearColor = setValue;
		return;
	}
	else if (str == "_darkestSecret")
	{
		this->_darkestSecret = setValue;
		return;
	}
	else
		return;
}