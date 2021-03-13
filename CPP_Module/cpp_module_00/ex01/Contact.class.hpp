/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:12:32 by fflores           #+#    #+#             */
/*   Updated: 2021/03/13 15:35:29 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define CONTACTS_NUMBER 8

#include <iostream>
#include <iomanip>

class Contact{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	login;
	std::string	postalAddress;
	std::string	emailAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;
public:
	bool		empty;
	Contact();
	~Contact();
	std::string getVariable(std::string str) const;
	void setVariable(std::string str, std::string setValue);
};

#endif
