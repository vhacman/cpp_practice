#include <iostream>


/*
**	Demonstrates nested namespaces with an alias and prints the gravitational constant.
**
**	How it works		- Defines a nested namespace `motor::phisics` containing `gravitation`  
**						- Creates an alias `mf` for `motor::phisics`  
**						- Uses `std::cout` to print `mf::gravitation` followed by a newline  
**	Params:				none  
**	Returns:			int (implicitly returns 0 on success)  
*/
namespace motor
{
	namespace phisics
	{
		double gravitation = 9.81;
	}
}

int	main()
{
	//std::cout << motor::phisics::gravitation << std::endl;
	namespace mf = motor::phisics;
	std::cout << mf::gravitation << std::endl;
}
