//Programming Challenge 11
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void selectionSort(string [], int); //Sort Names Array Prototype
void showNames(string [], int); //Array to display Names Prototype


int main()
{
	//Program Challenge 11 Modify the program you wrote for Programming Challenge 6 so it reads in 20 strings from a file.
	
	const int NUM_NAMES = 20; //Constant for number of names in file
	string namesArray[NUM_NAMES]; //Array to hold names
	
	ifstream namesFile; //create ifstream object
	namesFile.open("names.txt"); //Open names.txt

	if(namesFile)
	{
		for(int x = 0; x < NUM_NAMES; x++)
		{
			getline(namesFile, namesArray[x]);
		}

		cout << "Unsorted List of Names:\n";
		cout << "-----------------------\n";
		showNames(namesArray, NUM_NAMES); //Show unsorted names
		cout << endl;
		cout << "Sorted List of Names:\n";
		cout << "---------------------\n";
		selectionSort(namesArray, NUM_NAMES); //Sort names with selectionSort function
		showNames(namesArray, NUM_NAMES); //Show sorted names
		cout << endl;

		namesFile.close(); //close file
	}
	else
	{
		cout << "Error opening the file.\n"; //Error for if file does not open correctly
	}
	
	/*Program Challenge 6 Code:  Modify the selctionSort function presented in this chapter so it sorts
	an array of strings instead of an array of ints.  Test the function with a driver program.  Use 
	Program 8-8 as a skeleton to complete.
	const int NUM_NAMES = 20;
	string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim",
								"Stamey, Marty", "Rose, Geri", "Taylor, Terri", "Johnson, Jill",
								"Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean", "Weaver, Jim",
								"Pore, Bob", "Rutherford, Greg", "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
								"Pike, Gordon", "Holland, Beth"};

	cout << "Unsorted List of Names:\n";
	cout << "-----------------------\n";
	showNames(names, NUM_NAMES); //Show unsorted names
	cout << endl;
	cout << "Sorted List of Names:\n";
	cout << "---------------------\n";
	selectionSort(names, NUM_NAMES); //Sort the names with selectionSort function
	showNames(names, NUM_NAMES); //Show sorted names
	cout << endl;*/

	return 0;
}

void selectionSort(string array[], int size)
{
	int startScan, minIndex;
	string strArray;

	for(startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		strArray = array[startScan];
		for(int index = startScan + 1; index < size; index++)
		{
			if(array[index] < strArray)
			{
				strArray = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = strArray;
	}
}

void showNames(string names[], int size)
{
	for(int index = 0; index < size; index++)
	{
		cout << names[index] << endl;
	}
}

