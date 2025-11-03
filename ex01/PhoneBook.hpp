#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include "Contact.hpp"

class PhoneBook {
private:
	Contact contacts[8];
public:
	PhoneBook();
	~PhoneBook();

	PhoneBook add_contact(PhoneBook pb, int total);
	PhoneBook delete_last_contact(PhoneBook pb);
	Contact &get_contact(int i);
	void	display_contact(PhoneBook pb, int total);
	void	search_contact(PhoneBook pb, int total);
};

#endif