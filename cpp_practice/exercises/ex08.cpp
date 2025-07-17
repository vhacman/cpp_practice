#include <iostream>

/*
**	Removes the first three characters from the user’s name and prints the result.
**
**	How it works		- Prints a prompt asking for the user’s name  
**						- Reads the entire line of input into `name`  
**						- Erases 3 characters starting at position 0 using `name.erase(0, 3)`  
**						- Prints the modified `name`  
**	Params:				none  
**	Returns:			0 on success  
*/
int	main()
{
	std::string	name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	name.erase(0, 3);
	std::cout << name << std::endl;
	return (0);
}
