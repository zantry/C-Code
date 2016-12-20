// Antry Chapter 5 Programming Challenge 12
// This program converts Celsius temperatures to Farenheit temperatures and display .
#include <iostream>
using namespace std;

int main()
{
	
	double F, C; // Variables
	cout << "This program displays a table of Celsius temperatures\n";
	cout << "from 0 to 20 and their Fahrenheit equivalents.\n";
	C = 0.0; //Celsius must begin at 0 degrees

	cout << "\nCelsius		Fahrenheit\n";	//Format Table
	cout << "----------------------------\n";

	while(C <= 20.0) //Celsius must only go to 20
	{
		F = (9.0 / 5.0) * C + 32.0;	//Fahrenheit calculation
		cout << C << "\t\t" << F << endl; //Format and Display Celsius and Fahrenheit
			C++; //Increment Celsius by 1
	}

	return 0;
}
