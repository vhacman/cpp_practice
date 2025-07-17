#include <iostream>

int	main()
{
	std::string name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);

	name.insert(0, "@");

	std::cout << name << std::endl;
}

/*
.insert() method

*/
