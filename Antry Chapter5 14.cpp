//Antry Programming Challenge 14
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Variables
	int number_students = 0;
	string student_1, last_student, name;

	cout << "Enter the number of students in your class: \n"; //Prompt for number of students in class
	cin >> number_students; //Get Number of Students in Class
	while (number_students < 1 || number_students > 25) //Input Validation
	{
		cout << "ERROR: Number of students must be at least 1 and no more than 25.\n"; //Error if input is not between 1-25
		cout << "Please re-enter the number of students in your class.\n"; 
		cin >> number_students; //Reenter Number of Students
	}

	for(int i = 1; i <= number_students; i++) //Loop to Collect Students Names
	{
		cout << "Enter a student's name.\n"; //Prompt for Student Names
		cin >> name; //Get Student Names

		if (i == 1) 
		{
			student_1 = name; //Assign First and Last Names
			last_student = name;
		}
		else
		{
			if (name < student_1)
				student_1 = name; //Lowest Letter Name Assigned to First Student
			else if (name > last_student)
				last_student = name; //Highest Letter Name Assigned to Last Student
		}
		
	}

	cout << "The first student in line is " << student_1 << " and the last student in line is " << last_student << "." << endl; //Display First and Last Students

	return 0;
}