// This program is for Chapter 3 Question 26
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Variables
	double	sale,	// Amount of sale
			taxRate, // Amount of tax rate
			saleTotal; // Total of retail sale

	// Set desired output formatting for variables.
	cout << setprecision(2) << fixed;

	// Prompt users for amount of sale and tax rate.
	cout << "Enter amount of the sale: (in XX.XX format)\n";
	cin >> sale;
	cout << "Enter tax rate: (in X.XX format)\n";
	cin >> taxRate;
	
	// Calculate total of retail sale.
	saleTotal = (sale * taxRate) + sale;

	// Display total of retail sale.
	cout << "The total of the retail sale is $" << saleTotal << "." << endl;
	return 0;
}
