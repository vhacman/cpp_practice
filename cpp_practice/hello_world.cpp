#include <iostream> //header per le funzioni input/output in c++

int	main ()
{
	int x;
	int	y;

	y = 6;
	x = 5;
	// << '\n' inserisce un carattere di a capo ma non svuota il buffer.
	std::cout << "I like pizza" << '\n';
	//per mettere la newline si può usare sia '\n' che std::endl --> questo però pulishe anche il buffer
	//Il "flush" significa che i dati accumulati nel buffer vengono scritti subito sullo schermo.
	std::cout << "It's really good!" << std::endl;
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	return (0);
}

