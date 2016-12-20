// Antry Chapter 3 Programming Challenge 12
// This program converts Celsius temperatures to Farenheit temperatures.

#include <iostream>
using namespace std;

int main()
{
	// Variables
	double F, C;

	// Prompt user for Celisius value
	cout << "Enter temperature in Celsius.\n";
	cin >> C;

	//Calculate conversion
	F = (9.0 / 5.0) * C + 32.0;

	//Display temperature in Farenheit
	cout << "The temperature in Farenheit is " << F << " degrees." << endl;
	return 0;
}