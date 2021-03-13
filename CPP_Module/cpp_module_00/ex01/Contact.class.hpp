/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:12:32 by fflores           #+#    #+#             */
/*   Updated: 2021/03/13 17:43:27 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define CONTACTS_NUMBER 8

#include <iostream>
#include <iomanip>

class Contact{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
public:
	bool		empty;
	Contact();
	~Contact();
	std::string getVariable( std::string str ) const;
	void setVariable( std::string str, std::string setValue );
};

#endif
