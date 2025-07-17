#include <iostream>

/*
**	Appends "@gmail.com" to the user’s name and prints the new username.
**
**	How it works		- Prints a prompt asking for the user’s name  
**						- Reads the entire line of input into `name`  
**						- Appends the string "@gmail.com" to `name`  
**						- Prints "Your username is now " followed by the modified `name`  
**	Params:				none  
**	Returns:			0 on success  
*/
int	main()
{
	std::string	name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	name.append("@gmail.com");
	std::cout << "Your username is now " << name << std::endl;
	return (0);
}