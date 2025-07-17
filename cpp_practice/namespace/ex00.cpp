#include <iostream>

/*
**	Initializes the graphics subsystem.
**
**	How it works		- Prints "Initialization of the graphics" to standard output  
**	Params:				none  
**	Returns:			void  
*/
namespace graphics
{
	void	init()
	{
		std::cout << "Initialization of the graphics" << std::endl;
	}
}

/*
**	Initializes the audio subsystem.
**
**	How it works		- Prints "Initialization of the audio" to standard output  
**	Params:				none  
**	Returns:			void  
*/
namespace audio
{
	void	init()
	{
		std::cout << "Initialization of the audio" << std::endl;
	}
}

/*
**	Calls initialization routines for graphics and audio.
**
**	How it works		- Calls `graphics::init()` to initialize graphics  
**						- Calls `audio::init()` to initialize audio  
**	Params:				none  
**	Returns:			int (implicitly 0 on success)  
*/
int	main()
{
	graphics::init();
	audio::init();
}

