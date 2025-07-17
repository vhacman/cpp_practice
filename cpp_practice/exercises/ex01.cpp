#include <iostream>

/*
**	Reads user's name from stdin and prints a greeting or error.
**	Prompts for input and handles empty input case.
**
**	How it works		Writes prompt to std::cout, uses std::getline to read name;
**						checks if name.empty(); prints error or greeting accordingly.
**	Params:				none
**	Returns:			0 on success
*/
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
