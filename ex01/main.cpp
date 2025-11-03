#include "PhoneBook.hpp"

int	main()
{
	PhoneBook pb;
	std::string cmd;
	int		  total = 0;

	//pb = pb.add_contact(pb, total++);
	//pb = pb.add_contact(pb, total++);
	//pb = pb.add_contact(pb, total++);
	//pb = pb.add_contact(pb, total++);
	//pb = pb.add_contact(pb, total++);
	//pb = pb.add_contact(pb, total++);
	//pb = pb.add_contact(pb, total++);
	//pb = pb.add_contact(pb, total++);
	//pb.search_contact(pb, total);
	//if (total >= 8)
	//	total--;
	//pb = pb.add_contact(pb, total++);
	//pb.search_contact(pb, total);
	//pb = pb.add_contact(pb, total++);
	//pb = pb.add_contact(pb, total++);
	//pb.search_contact(pb, total);
	while (true)
	{
		std::cout << "Enter a command : ";
		if (!std::getline(std::cin, cmd))
			break ;
		if (strcmp(cmd.c_str(), "ADD") == 0)
		{
			pb = pb.add_contact(pb, total);
			if (std::cin.eof()) {
				std::cerr << "EOF détecté, sortie propre\n";
				return (-1);
			}
			if (total == 8)
				total--;
			total++;
		}
		else if (strcmp(cmd.c_str(), "SEARCH") == 0)
		{
			pb.search_contact(pb, total);
		}
		else if (strcmp(cmd.c_str(), "EXIT") == 0)
		{
			break ;
		}
	}
	return (0);
}