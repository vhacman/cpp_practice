#include <iostream>

/*
**	Finds the position of the first space in the user’s name and prints it.
**
**	How it works		- Prints a prompt asking for the user’s name  
**						- Reads the entire line of input into `name`  
**						- Calls `name.find(' ')` to locate the first space character  
**						- Prints the resulting index (or `std::string::npos` if no space is found)  
**	Params:				none  
**	Returns:			0 on success  
*/
int	main()
{
	std::string name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	std::cout << name.find(' ') << std::endl;
	return (0);
}