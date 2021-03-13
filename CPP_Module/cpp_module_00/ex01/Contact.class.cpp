/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:12:25 by fflores           #+#    #+#             */
/*   Updated: 2021/03/13 15:35:30 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(){
	this->empty = true;
	this->firstName.clear();
	this->lastName.clear();
	this->nickName.clear();
	this->login.clear();
	this->postalAddress.clear();
	this->emailAddress.clear();
	this->phoneNumber.clear();
	this->birthdayDate.clear();
	this->favoriteMeal.clear();
	this->underwearColor.clear();
	this->darkestSecret.clear();
	return ;
}

Contact::~Contact(){
	return ;
}

std::string Contact::getVariable(std::string str) const{
	if (str == "firstName")
		return (this->firstName);
	else if (str == "lastName")
		return (this->lastName);
	else if (str == "nickName")
		return (this->nickName);
	else if (str == "login")
		return (this->login);
	else if (str == "postalAddress")
		return (this->postalAddress);
	else if (str == "emailAddress")
		return (this->emailAddress);
	else if (str == "phoneNumber")
		return (this->phoneNumber);
	else if (str == "birthdayDate")
		return (this->birthdayDate);
	else if (str == "favoriteMeal")
		return (this->favoriteMeal);
	else if (str == "underwearColor")
		return (this->underwearColor);
	else if (str == "darkestSecret")
		return (this->darkestSecret);
	else
		return ("");
}

void	Contact::setVariable(std::string str, std::string setValue)
{
	if (str == "firstName")
	{
		this->firstName = setValue;
		if (setValue.length() > 10)
		{
			this->firstName.erase(9,(this->firstName.length() - 9));
			this->firstName.insert(this->firstName.begin()+9, '.');
		}
		return;
	}
	else if (str == "lastName")
	{
		this->lastName = setValue;
		if (setValue.length() > 10)
		{
			this->lastName.erase(9,(this->lastName.length() - 9));
			this->lastName.insert(this->lastName.begin()+9, '.');
		}
		return;
	}
	else if (str == "nickName")
	{
		this->nickName = setValue;
		if (setValue.length() > 10)
		{
			this->nickName.erase(9,(this->nickName.length() - 9));
			this->nickName.insert(this->nickName.begin()+9, '.');
		}
		return;
	}
	else if (str == "login")
	{
		this->login = setValue;
		return;
	}
	else if (str == "postalAddress")
	{
		this->postalAddress = setValue;
		return;
	}
	else if (str == "emailAddress")
	{
		this->emailAddress = setValue;
		return;
	}
	else if (str == "phoneNumber")
	{
		this->phoneNumber = setValue;
		return;
	}
	else if (str == "birthdayDate")
	{
		this->birthdayDate = setValue;
		return;
	}
	else if (str == "favoriteMeal")
	{
		this->favoriteMeal = setValue;
		return;
	}
	else if (str == "underwearColor")
	{
		this->underwearColor = setValue;
		return;
	}
	else if (str == "darkestSecret")
	{
		this->darkestSecret = setValue;
		return;
	}
	else
		return;
}