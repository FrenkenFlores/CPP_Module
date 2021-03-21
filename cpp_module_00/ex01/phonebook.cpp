/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:35:47 by fflores           #+#    #+#             */
/*   Updated: 2021/03/13 16:13:59 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void    addFunction(Contact &contact)
{
	std::string	input;
	contact.empty = false;
	std::cout << "first name: ";
	std::cin >> input;
	contact.setVariable("_firstName", input);
	std::cout << "last name: ";
	std::cin >> input;
	contact.setVariable("_lastName", input);
	std::cout << "nickname: ";
	std::cin >> input;
	contact.setVariable("_nickName", input);
	std::cout << "login: ";
	std::cin >> input;
	contact.setVariable("_login", input);
	std::cout << "postal address: ";
	std::cin >> input;
	contact.setVariable("_postalAddress", input);
	std::cout << "email address: ";
	std::cin >> input;
	contact.setVariable("_emailAddress", input);
	std::cout << "phone number: ";
	std::cin >> input;
	contact.setVariable("_phoneNumber", input);
	std::cout << "birthday date: ";
	std::cin >> input;
	contact.setVariable("_birthdayDate", input);
	std::cout << "favorite meal: ";
	std::cin >> input;
	contact.setVariable("_favoriteMeal", input);
	std::cout << "underwear color: ";
	std::cin >> input;
	contact.setVariable("_underwearColor", input);
	std::cout << "darkest secret: ";
	std::cin >> input;
	contact.setVariable("_darkestSecret", input);
	std::cout << "DONE" << std::endl;
}

void    searchFunction(Contact *contactList)
{
	int i = 0;
	int index = 1;
	int indexNbr;

	while (i != CONTACTS_NUMBER)
	{
		if (contactList[i].empty == 0)
		{
			std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << index << '|';
			std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << contactList[i].getVariable("_firstName") << '|';
			std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << contactList[i].getVariable("_lastName") << '|';
			std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << contactList[i].getVariable("_nickName") << std::endl;
			index++;
		}
		i++;
	}
	if (index == 1)
		std::cout << "NO CONTACTS FOUND" << std::endl;
	else{
		std::cout << "CHOOSE CONTACT'S INDEX:";
		std::cin >> indexNbr;
		if (indexNbr > index)
			std::cout << "NO INDEX FOUND" << std::endl;
		else
		{
			std::cout << "First Name: " << contactList[indexNbr - 1].getVariable("_fullFirstName") << std::endl;
			std::cout << "Last Name: " << contactList[indexNbr - 1].getVariable("_fullLastName") << std::endl;
			std::cout << "Nickname: " << contactList[indexNbr - 1].getVariable("_fullNickName") << std::endl;
			std::cout << "Login: " << contactList[indexNbr - 1].getVariable("_login") << std::endl;
			std::cout << "Postal address: " << contactList[indexNbr - 1].getVariable("_postalAddress") << std::endl;
			std::cout << "Email address: " << contactList[indexNbr - 1].getVariable("_emailAddress") << std::endl;
			std::cout << "Phone number: " << contactList[indexNbr - 1].getVariable("_phoneNumber") << std::endl;
			std::cout << "Birthday date: " << contactList[indexNbr - 1].getVariable("_birthdayDate") << std::endl;
			std::cout << "Favorite meal: " << contactList[indexNbr - 1].getVariable("_favoriteMeal") << std::endl;
			std::cout << "Underwear color: " << contactList[indexNbr - 1].getVariable("_underwearColor") << std::endl;
			std::cout << "Darkest secret: " << contactList[indexNbr - 1].getVariable("_darkestSecret") << std::endl;
		}
	}
}

int main(void)
{
	std::string input;
	Contact contactList[CONTACTS_NUMBER];
	int i = 0;

	while (1)
	{
		std::cin >> input;
		if (input == "ADD")
		{
			addFunction(contactList[i % CONTACTS_NUMBER]);
			i++;
		}
		else if (input == "SEARCH")
			searchFunction(contactList);
		else if (input == "EXIT")
			exit(0);
		else
			std::cout << "COMMAND NOT FOUND"<< std::endl;
	}
	return (0);
}
