//Program to Calculate Sales Tax
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string month = " ";								//Month
	double year = 0;								//Year
	double sales = 0.00;							//Amount of sales
	double countyTax = .04;							//County Sales Tax
	double stateTax = .02;							//State Sales Tax
	double totalSalesTax = countyTax + stateTax;	//The total of county and state sales tax
	double totalCollected = 0.00;					//The total amount collected

	cout << "Enter the current month:\n"; //Prompt user for Month, Year, and Sales Amount
	cin >> month;
	cout << "Enter the current year:\n"; 
	cin >> year;
	cout << "Enter the amount of sales:\n";
	cin >> sales;
	
	totalCollected = (totalSalesTax * sales) + sales; //Calculations 
	countyTax = countyTax * sales;
	sales = totalCollected / 1.06;
	stateTax = stateTax * sales;
	totalSalesTax = totalSalesTax * sales;
	
	cout << "\nMonth: " << setw(9) << month << endl; //Formatted Output
	cout << "Year: " << setw(9) << year << endl;
	cout << "--------------------\n";
	cout << setprecision(2) << fixed; //Format Decimal Points
	cout << "Total Collected: " << setw(10) << "$" << setw(10) << totalCollected <<endl; 
	cout << "Sales: " << setw(20) << "$" << setw(10) << sales <<endl; 
	cout << "County Sales Tax: " << setw(9) << "$" << setw(10) << countyTax << endl;
	cout << "State Sales Tax: " << setw(10) << "$" << setw(10) << stateTax << endl;
	cout << "Total Sales Tax: " << setw(10) << "$" << setw(10) << totalSalesTax << endl;
	return 0;
}

