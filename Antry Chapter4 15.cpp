//Programming Challenge 15
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

double weight, distance, charges;
int const ratePerMile = 500;

cout << "Enter weight of the package in kilograms.\n";
cin >> weight;

cout << "Enter distance the package will be shipped in miles.\n";
cin >> distance;

if (weight > 0 && weight <= 20.0)
{
	if (distance >= 10.0 && distance <= 3000.0)
	{
		if (distance <= 500.0)
			distance = 1.0;
		else if (distance > 500.0 && distance <= 1000.0)
			distance = 2.0;
		else if (distance > 1000.0 && distance <= 1500.0)
			distance = 3.0;
		else if (distance > 1500.0 && distance <= 2000.0)
			distance = 4.0;
		else if (distance > 2000.0 && distance <= 2500.0)
			distance = 5.0;
		else if (distance > 2500.0 && distance <= 3000.0)
			distance = 6.0;

		if (weight <= 2)
			charges = distance * 1.10;
		else if (weight > 2 && weight <= 6)
			charges = distance * 2.20;
		else if (weight > 6 && weight <= 10)
			charges = distance * 3.70;
		else if (weight > 10 && weight <= 20)
			charges = distance * 4.80;

		cout << "Shipping charge is $" << setprecision(2) << fixed << charges << "." << endl;
	}
	else 
		cout << "Distance shipped must be 10-3000 miles.  Please run program again.\n";
}
else 
{
	cout << "Weight of package must be 1-20 kilgrams.  Please run the program again.\n";  
}
return 0;
}