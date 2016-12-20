//Programming Challenge 3 for Chapter 6
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;
//Creating Function Prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	//Variables
	double NWsales, NEsales, SWsales, SEsales;  
	//Calling getSales for all divisions
	NWsales = getSales("Northwest");
	NEsales = getSales("Northeast");
	SWsales = getSales("Southwest");
	SEsales = getSales("Southeast");
	 //Calling findHighest 
	findHighest(NWsales, NEsales, SWsales, SEsales); 

return 0;

}

double getSales(string divisionName)
{
	double totalSales;
	//Prompt user for division sales
	cout << "Please enter the total quarterly sales for " << divisionName << ".\n";
    cin  >> totalSales;
	cout << "\n";

	while (totalSales < 0.00) //Input Validation
	{
		cout << "ERROR! This program does not accept dollar amounts less than $0.00.\n";
		cout << "\nPlease re-enter the total quarterly sales for " << divisionName << ".\n";
		cin >> totalSales;
		cout << "\n";
	}
	return totalSales;
}
//Passing the sales totals, determing the largest sales, and printing the winning sales name
void findHighest(double NWsales, double NEsales, double SWsales, double SEsales)
{
	double highestSales;

	if(NWsales > NEsales && NWsales > SWsales && NWsales > SEsales)
	{
		highestSales = NWsales;
		cout << "Northwest"; 
	}
	else if (NEsales > NWsales && NEsales > SWsales && NEsales > SEsales)
	{
		highestSales = NEsales;
		cout << "Northeast";
	}
	else if (SWsales > NWsales && SWsales > NEsales && SWsales > SEsales)
	{
		highestSales = SWsales;
		cout << "Southwest";
	}
	else if (SEsales > NWsales && SEsales > NEsales && SEsales > SWsales)
	{
		highestSales = SEsales;
		cout << "Southeast";
	}
	else
	{
		cout << "The winning division could not be determined.\n"; //I put this in just in case two divisions had the same amount of sales.
		exit(0);
	}
	//Printing the sales figure
	cout << " is the winning division with $" << fixed << showpoint << setprecision(2) << highestSales  << " in quarterly sales.\n";
}
