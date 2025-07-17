#include <iostream>

// int	main()
// {
// 	std::string name = "Gabriela";
// 	std::cout << "Hello " << name << std::endl;
// }


/*
**	Initializes a predefined name and prints a greeting using unqualified std names.
**
**	How it works		- Imports all names from the `std` namespace into the current scope  
**						- Defines a `string` variable `name` initialized to "Gabriela"  
**						- Uses `cout` to print "Hello " followed by the value of `name` and a newline  
**	Params:				none  
**	Returns:			int (implicitly returns 0 on success)  
*/
int	main()
{
	using namespace std;

	string name = "Gabriela";
	cout << "Hello " << name << std::endl;
}
