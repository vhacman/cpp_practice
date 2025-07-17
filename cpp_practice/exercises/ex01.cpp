#include <iostream>

int	main()
{
	std::string	name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);

	if (name.empty())
	{
		std::cout << "You didn't enter your name"  << std::endl;
	}
	else
	{
		std::cout << "Hello " << name << std::endl;
	}
}

/*
.empty() method



*/
