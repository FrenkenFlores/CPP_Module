#include "phonebook.hpp"

void    addFunction(Contact &contact)
{
	std::string	input;
	contact.empty = false;
	std::cout << "first name: ";
	std::cin >> input;
	contact.setVariable("firstName", input);
	std::cout << "last name: ";
	std::cin >> input;
	contact.setVariable("lastName", input);
	std::cout << "nickname: ";
	std::cin >> input;
	contact.setVariable("nickName", input);
	std::cout << "login: ";
	std::cin >> input;
	contact.setVariable("login", input);
	std::cout << "postal address: ";
	std::cin >> input;
	contact.setVariable("input", input);
	std::cout << "email address: ";
	std::cin >> input;
	contact.setVariable("emailAddress", input);
	std::cout << "phone number: ";
	std::cin >> input;
	contact.setVariable("phoneNumber", input);
	std::cout << "birthday date: ";
	std::cin >> input;
	contact.setVariable("birthDay", input);
	std::cout << "favorite meal: ";
	std::cin >> input;
	contact.setVariable("favoriteMeal", input);
	std::cout << "underwear color: ";
	std::cin >> input;
	contact.setVariable("underwearColor", input);
	std::cout << "darkest secret: ";
	std::cin >> input;
	contact.setVariable("darkestSecret", input);
	std::cout << "DONE" << std::endl;
}

void    searchFunction(Contact *contactList)
{
	int i = 0;
	int index = 1;

	while (i != CONTACTS_NUMBER)
	{
		if (contactList[i].empty == 0)
		{
			std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << index << '|';
			std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << contactList[i].getVariable("firstName") << '|';
			std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << contactList[i].getVariable("lastName") << '|';
			std::cout << std::setw(10) << std::setiosflags(std::ios_base::right) << contactList[i].getVariable("nickName") << std::endl;
			index++;
		}
		i++;
	}
	if (index == 1)
		std::cout << "NO CONTACTS FOUND" << std::endl;
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
