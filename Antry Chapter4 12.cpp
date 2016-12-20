//Program Challenge 12 Software Sales
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double package = 99.00, quantity = 0.00, discount = 0.00, totalCost = 0.00;
	cout << "How many units sold?" << endl;
	cin >> quantity;

	if (quantity >= 1 && quantity < 10)
	{
		totalCost = quantity * package;
		//cout << setprecision(2) << fixed;		The challenge does not ask for the total cost to be printed
		//cout << totalCost;					But in order to test it, I needed to see the ouput. I commented out the couts in case you wanted it.
	}
	else if (quantity >= 10 && quantity <= 19)
	{
		discount = 0.2;
		totalCost = quantity  * package - ( quantity * package * discount);
		//cout << setprecision(2) << fixed;
		//cout << totalCost;
	}
	else if (quantity >= 20 && quantity <= 49)
		{
		discount = 0.3;
		totalCost = quantity  * package - ( quantity * package * discount);
		//cout << setprecision(2) << fixed;
		//cout << totalCost;
	}
	else if (quantity >= 50 && quantity <= 99)
		{
		discount = 0.4;
		totalCost = quantity  * package - ( quantity * package * discount);
		//cout << setprecision(2) << fixed;
		//cout << totalCost;
	}
	else if (quantity >= 100)
		{
		discount = 0.5;
		totalCost = quantity  * package - ( quantity * package * discount);
		//cout << setprecision(2) << fixed;
		//cout << totalCost;
	}
	else cout << "Make sure the number of units is greater than 0." << endl;
	return 0;
}