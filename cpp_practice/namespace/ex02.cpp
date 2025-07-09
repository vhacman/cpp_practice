//annidamento namespace

#include <iostream>

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
