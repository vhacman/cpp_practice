#include <iostream> // header per input/output in C++
#include <string>   // header per usare std::string


/*
**	Prints sample text and variable values demonstrating basic I/O in C++.
**
**	How it works		- Declares variables of types int, double, char, and std::string  
**						- Initializes each variable with sample values  
**						- Demonstrates simple output using '\n' and std::endl  
**						- Prints each variable’s name and value to the console  
**						- Outputs combined strings and variables (e.g., greeting and age)  
**	Params:				none  
**	Returns:			int (implicitly 0 on success)  
*/
int main()
{
	//---------------------------
	// Dichiarazione variabili
	//---------------------------
	int x, y, days, age;
	double gpa;
	char grade;
	std::string name;
	std::string address;

	//---------------------------
	// Inizializzazione variabili
	//---------------------------
	x = 5;
	y = 6;
	days = 7;
	age = 26;
	gpa = 2.5;
	grade = 'A';
	name = "Gabriela";
	address = "123 Fake St.";

	//---------------------------
	// Output semplice
	//---------------------------

	// '\n' = newline --> non forza il flush del buffer
	std::cout << "I like pizza" << '\n';

	// std::endl = newline + flush (svuota il buffer di output)
	std::cout << "It's really good!" << std::endl;

	//---------------------------
	// Output delle variabili
	//---------------------------
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "days = " << days << std::endl;
	std::cout << "gpa = " << gpa << std::endl;
	std::cout << "grade = " << grade << std::endl;

	//---------------------------
	//Output stringhe
	//---------------------------
	std::cout << "Name: " << name << '\n';
	std::cout << "Address: " << address << '\n';

	// Output combinato
	std::cout << "Hello " << name << '\n';
	std::cout << "You are " << age << " years old" << '\n';

	return 0;
}
