#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double getTotal(double[], int);
double getLowest(double[], int);

int main()
{
	string studentNames[5];
	char letterGrades[5] = {'A', 'B', 'C', 'D', 'F'};
	double testScore[4];

	double lowestScore = 0;
	double totalScore = 0;
	double dropLowest = 0;
	double averageScore = 0;
	char grade; 

	for(int i = 0; i < 5; i++)
	{
		cout << "Enter student " << (i+1) << "'s name.\n";
		cin >> studentNames[i];
		
		for(int k = 0; k < 4; k++)
		{
			cout << "Please enter test score " << (k + 1) << "." << endl;
			cin >> testScore[k];
			if(testScore[k] < 0 || testScore[k] > 100)
			{
				cout << "This program does not accept test scores less than 0 or greater than 100.  Please re-enter the scores.\n";
				cin >> testScore[k];
			}

			lowestScore = getLowest(testScore, 4);
			totalScore = getTotal(testScore, 4);
			dropLowest = totalScore-lowestScore;
			averageScore = dropLowest/3;
		
		}
	
		if(averageScore > 0 && averageScore <= 59)
			grade = letterGrades[4];
		if(averageScore >= 60 && averageScore <= 69)
			grade = letterGrades[3];
		if(averageScore >= 70 && averageScore <= 79)
			grade = letterGrades[2];
		if(averageScore >= 80 && averageScore <= 89)
			grade = letterGrades[1];
		if(averageScore >= 90 && averageScore <= 100)
			grade = letterGrades[0];
			
		cout << fixed << showpoint << setprecision(2) << "This student's average test score is " << averageScore << " and their letter grade is " << grade << ".\n\n";
	}
	return 0;
}

double getTotal(double numbers[], int size)
{
	double total = 0; 
	for(int i = 0; i < size; i++)
		total += numbers[i];
	return total;
}

double getLowest(double numbers[], int size)
{
	double lowest;
	lowest = numbers[0];
	for(int x = 1; x < size; x++)
	{
		if(numbers[x] < lowest)
		lowest = numbers[x];
	}
	return lowest;
}

