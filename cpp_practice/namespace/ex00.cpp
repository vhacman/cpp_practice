#include <iostream>

namespace graphics
{
	void	init()
	{
		std::cout << "Initialization of the graphics" << std::endl;
	}
}

namespace audio
{
	void	init()
	{
		std::cout << "Initialization of the audio" << std::endl;
	}
}

int	main()
{
	graphics::init();
	audio::init();
}

