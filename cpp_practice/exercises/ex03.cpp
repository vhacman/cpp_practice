#include <iostream>

int	main()
{
	std::string	name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);

	name.clear();

	std::cout << "Hello " << name << std::endl;

	return (0);
}

/*
clear() method

*/
