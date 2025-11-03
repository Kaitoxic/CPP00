#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

Contact &PhoneBook::get_contact(int i)
{
    return contacts[i];
}

PhoneBook PhoneBook::delete_last_contact(PhoneBook pb)
{
	int i = 1, j = 0;
	std::cout << "Too much contacts, removing the oldest one" << std::endl;
	while (i < 8)
	{
		pb.contacts[j] = pb.contacts[i];
		i++;
		j++;
	}
	return (pb);
}

PhoneBook PhoneBook::add_contact(PhoneBook pb, int total)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	if (total == 8)
	{
		pb = delete_last_contact(pb);
		total--;
	}
	do
	{
		std::cout << "Enter the first name : ";
		if (!std::getline(std::cin, first_name))
			return (pb);
	} while (first_name.size() == 0);
	do
	{
		std::cout << "Enter the last name : ";
		if (!std::getline(std::cin, last_name))
			return (pb);
	} while (last_name.size() == 0);
	do
	{
		std::cout << "Enter the nickname : ";
		if (!std::getline(std::cin, nickname))
			return (pb);
	} while (nickname.size() == 0);
	do
	{
		std::cout << "Enter the phone number : ";
			if (!std::getline(std::cin, phone_number))
		return (pb);
	} while (phone_number.size() == 0);
	do
	{
		std::cout << "Enter the darkest secret : ";
		if (!std::getline(std::cin, darkest_secret))
			return (pb);
	} while (darkest_secret.size() == 0);
	Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
	pb.contacts[total] = contact;
	return (pb);
}

void	PhoneBook::display_contact(PhoneBook pb, int total)
{
	int	i = 0;

	std::cout << "|---indx---|---fnme---|---lnme---|---nnme---|" << std::endl;
	while (i < total)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		pb.get_contact(i).print_first_name(get_contact(i));
		std::cout << "|";
		pb.get_contact(i).print_last_name(get_contact(i));
		std::cout << "|";
		pb.get_contact(i).print_nickname(get_contact(i));
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void	PhoneBook::search_contact(PhoneBook pb, int total)
{
	std::string	i, total_str;
	int		index;

	if (total == 0)
	{
		std::cout << "You have no contacts" << std::endl;
		return ;
	}
	pb.display_contact(pb, total);
	while (true)
	{
		std::cout << "Enter the index : ";
		if (!std::getline(std::cin, i))
			exit(1);
		total_str = total + '0';
		if (i.size() > 1 || i[0] == '\0' || i[0] < '0' || i[0] > '7' || i[0] >= total_str[0])
		{
			std::cout << "Enter a valid index please\n";
		}
		else
		{
			break ;
		}
	}
	index = atoi(i.c_str());
	std::cout << index << std::endl;
	pb.get_contact(index).print_contact(pb.get_contact(index));
}

//void	PhoneBook::search_contact(PhoneBook pb, int i, int total)
//{
//	if (i > total)
//	{
		
//	}
//	std::cout << "|---indx---|---fnme---|---lnme---|---nnme---|" << std::endl;
//	std::cout << "|";
//	std::cout << std::setw(10) << i;
//	std::cout << "|";
//	pb.get_contact(i).print_first_name(get_contact(i));
//	std::cout << "|";
//	pb.get_contact(i).print_last_name(get_contact(i));
//	std::cout << "|";
//	pb.get_contact(i).print_nickname(get_contact(i));
//	std::cout << "|" << std::endl;
//	i++;
//	std::cout << "|----------|----------|----------|----------|" << std::endl;
//}
