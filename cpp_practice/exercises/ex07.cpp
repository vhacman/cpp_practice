#include <iostream>

int	main()
{
	std::string name;

	std::cout << "Enter your name: ";
	std::getline(std::cin, name);

	std::cout << name.find(' ') << std::endl;

	return (0);
}

/*
.find() method

Permette di cercare all'interno di una strigna la prima occorrenza di un'altra stringa,
di un array di caratteri o di un singolo carattere.

Se lo trova, ti restituisce la posizione (indice, a partire da 0) dove inizia il match,
altrimenti restituisce std::string::npos, un valore speciale che indica "non trovato"

Le quattro versioni overload

size_t find(const string& str, size_t pos = 0) const;
Cerca la stringa str, a partire dal carattere in posizione pos (default = 0).


size_t find(const char* s, size_t pos = 0) const;
Cerca la C‐string terminata da '\0' puntata da s, sempre da pos.
Simile alla prima ma accetta un puntatore C-string terminata da '\0'
Utile se hai un array di caratteri o una stringa letterale "ciao" e non vuoi costruire un std::string.

size_t find(const char* s, size_t pos, size_t n) const;
Cerca i primi n caratteri dell’array s, a partire da pos. Utile se l’array non è '\0'‐terminato.


size_t find(char c, size_t pos = 0) const;
Cerca il carattere c, da pos in poi.
*/
