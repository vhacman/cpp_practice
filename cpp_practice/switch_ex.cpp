#include <iostream>

// int	main()
// {
// 	int	month;
// 	std::cout << "Enter the month (1-12): ";
// 	std::cin >> month;

// 	if(month == 1)
// 		std::cout << "It's January" << std::endl;
// 	else if(month == 2)
// 		std::cout << "It's February" << std::endl;
// 	else if(month == 3)
// 		std::cout << "It's March" << std::endl;
// 	else if(month == 4)
// 		std::cout << "It's April" << std::endl;
// 	else if(month == 5)
// 		std::cout << "It's May" << std::endl;
// 	else if(month == 6)
// 		std::cout << "It's June" << std::endl;
// 	else if(month == 7)
// 		std::cout << "It's July" << std::endl;
// 	else if(month == 8)
// 		std::cout << "It's August" << std::endl;
// 	else if(month == 9)
// 		std::cout << "It's September" << std::endl;
// 	else if(month == 10)
// 		std::cout << "It's October" << std::endl;
// 	else if(month == 11)
// 		std::cout << "It's November" << std::endl;
// 	else if(month == 12)
// 		std::cout << "It's December" << std::endl;
// 	else
// 		std::cout << "You didn't enter a number between (1-12)" << std::endl;
// }

/*
**	Prints the name of the month based on user input (1–12).
**
**	How it works		- Prompts the user to enter a month number (1–12)  
**						- Reads the integer `month` from standard input  
**						- Uses a `switch` statement to match `month`:  
**							• For 1–12: prints the corresponding month name  
**							• Default: prints an error message if input is outside 1–12  
**	Params:				none  
**	Returns:			void (implicitly returns 0 on success)  
*/
int	main()
{
	int	month;
	std::cout << "Enter the month (1-12): ";
	std::cin >> month;

	switch (month)
	{
		case 1:
			std::cout << "It is January" << std::endl;
			break;
		case 2:
			std::cout << "It is February" << std::endl;
			break;
		case 3:
			std::cout << "It is March" << std::endl;
			break;
		case 4:
			std::cout << "It is April" << std::endl;
			break;
		case 5:
			std::cout << "It is May" << std::endl;
			break;
		case 6:
			std::cout << "It is June" << std::endl;
			break;
		case 7:
			std::cout << "It is July" << std::endl;
			break;
		case 8:
			std::cout << "It is August" << std::endl;
			break;
		case 9:
			std::cout << "It is September" << std::endl;
			break;
		case 10:
			std::cout << "It is October" << std::endl;
			break;
		case 11:
			std::cout << "It is November" << std::endl;
			break;
		case 12:
			std::cout << "It is December" << std::endl;
			break;
		default:
			std::cout << "Please enter in only numbers (1-12)" << std::endl;
	}
}
