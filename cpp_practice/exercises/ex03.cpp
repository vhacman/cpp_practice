#include <iostream>

/*
**	Reads the user’s name and prints a greeting.
**
**	How it works		- Prints a prompt asking for the user’s name  
**						- Reads the entire line of input into `name`  
**						- Clears the string `name` using `name.clear()`  
**						- Prints "Hello " followed by the (now empty) `name`  
**	Params:				none  
**	Returns:			0 on success  
*/
int	main()
{
	std::string	name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	name.clear();
	std::cout << "Hello " << name << std::endl;
	return (0);
}
