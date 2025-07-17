#include <iostream>

/*
**	Reads user's name and enforces max length of 12 characters.
**
**	How it works	Prompts for name via std::cout, reads with std::getline;
**					checks name.length() > 12 and prints error or welcome message.
**	Params:			none
**	Returns:		0 on success
*/
int	main()
{
	std::string	name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	if (name.length() > 12)
	{
		std::cout << "Your name can't be over 12 characters!";
	}
	else
	{
		std::cout << "Welcome " << name << std::endl;
	}
	return (0);
}
