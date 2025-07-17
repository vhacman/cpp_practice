#include <iostream>

/*
**	Prepends "@" to the user’s name and prints the result.
**
**	How it works		- Prints a prompt asking for the user’s name  
**						- Reads the entire line of input into `name`  
**						- Inserts the character "@" at position 0 of `name`  
**						- Prints the modified `name`  
**	Params:				none  
**	Returns:			0 on success  
*/
int	main()
{
	std::string name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	name.insert(0, "@");
	std::cout << name << std::endl;
}
