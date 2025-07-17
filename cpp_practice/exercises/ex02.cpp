#include <iostream>

/*
**	Reads user's age and prints an access message based on thresholds.
**
**	How it works		Prompts for age via std::cin, then:
**						- if age >= 100: prints "too old" message
**						- else if age >= 18: prints welcome message
**						- else if age < 0: prints "unborn" message
**						- otherwise: prints "too young" message
**	Params:				none
**	Returns:			0 on success
*/
int	main()
{
	int	age;

	std::cout << "Enter your age ";
	std::cin >> age;
	if (age >= 100)
		std::cout << "You are too old to enter this site" << std::endl;
	else if (age >= 18)
		std::cout << "Welcome to the site!" << std::endl;
	else if (age < 0)
		std::cout << "You haven't been born yet" << std::endl;
	else
		std::cout << "You are not old enough to enter" << std::endl;
	return (0);
}
