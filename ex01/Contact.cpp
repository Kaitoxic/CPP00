#include <iostream>
#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

const std::string &Contact::get_first_name() const { return first_name; }
const std::string &Contact::get_last_name() const { return last_name; }
const std::string &Contact::get_nickname() const { return nickname; }

void Contact::print_contact(Contact contact)
{
	std::cout << "First name : " + contact.first_name + "\n" + "Last name : " + contact.last_name + "\n" + "Nickname : " + contact.nickname + "\n" + "Phone number : " + contact.phone_number + "\n" + "Darkest secret : " + contact.darkest_secret << std::endl;
	return ;
}

void Contact::print_first_name(Contact contact)
{
	int	len = contact.first_name.size();

	if (len < 10)
	{
		std::cout << std::setw(10) << contact.first_name;
	}
	else
	{
		int i = 0;
		while (i < 9)
		{
			std::cout << contact.first_name[i];
			i++;
		}
		std::cout << ".";
	}
	return ;
}

void Contact::print_last_name(Contact contact)
{
	int	len = contact.last_name.size();

	if (len < 10)
	{
		std::cout << std::setw(10) << contact.last_name;
	}
	else
	{
		int i = 0;
		while (i < 9)
		{
			std::cout << contact.last_name[i];
			i++;
		}
		std::cout << ".";
	}
	return ;
}

void Contact::print_nickname(Contact contact)
{
	int	len = contact.nickname.size();

	if (len < 10)
	{
		std::cout << std::setw(10) << contact.nickname;
	}
	else
	{
		int i = 0;
		while (i < 9)
		{
			std::cout << contact.nickname[i];
			i++;
		}
		std::cout << ".";
	}
	return ;
}
