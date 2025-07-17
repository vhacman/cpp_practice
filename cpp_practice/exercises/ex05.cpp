#include <iostream>

/*
**	Reads the user’s name and prints the first character.
**
**	How it works		- Prints a prompt asking for the user’s name  
**						- Reads the entire line of input into `name`  
**						- Accesses and prints the first character using `name.at(0)`  
**	Params:				none  
**	Returns:			0 on success  
*/
int	main()
{
	std::string name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	std::cout << name.at(0) << std::endl;
	return (0);
}