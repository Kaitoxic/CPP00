#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	Contact();
	~Contact();

	Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	void print_contact(Contact contact);
	void print_first_name(Contact contact);
	void print_last_name(Contact contact);
	void print_nickname(Contact contact);
	const std::string &get_first_name() const;
    const std::string &get_last_name() const;
    const std::string &get_nickname() const;
	//const std::string &get_phone_number() const { return phone_number; }
	//const std::string &get_darkest_secret() const { return darkest_secret; }
};

#endif