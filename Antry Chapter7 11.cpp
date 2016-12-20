#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//Global Constant to hold size of question numbers
const int ARRAY_SIZE = 20;

//Function Prototypes
void readAnswers(ifstream &, char [], int);
void checkAnswers(char[], char[], int &, int &, int);

int main()
{
	
	// File stream object
	ifstream inCorrectAnswers, inStudentAnswers;
	inCorrectAnswers.open("C:\\Users\\zpres\\Desktop\\Programming\\Programming Challenge 11\\CorrectAnswers.txt");
	inStudentAnswers.open("C:\\Users\\zpres\\Desktop\\Programming\\Programming Challenge 11\\StudentAnswers.txt");

	//Arrays to hold answers
	char correctAnswers[ARRAY_SIZE];
	char studentAnswers[ARRAY_SIZE];

	// Test for errors opening files
	if (!inCorrectAnswers)
	{
		cout << "Error opening the Correct Answers file.\n" << endl;
		return 0;
	}

	if(!inStudentAnswers)
	{
		cout << "Error opening the Student Answers file.\n" << endl;
		return 0;
	}

	//Read the CorrectAnswers.txt and StudentAnswers.txt into arrays
	readAnswers(inCorrectAnswers, correctAnswers, ARRAY_SIZE);
	readAnswers(inStudentAnswers, studentAnswers, ARRAY_SIZE);

	// Close the files
	inCorrectAnswers.close();
	inStudentAnswers.close();

	//Determine the number of questions that the student missed
	int correct = 0, incorrect = 0;
	checkAnswers(correctAnswers, studentAnswers, correct, incorrect, ARRAY_SIZE);

	//List question missed, showing the correct and incorrect answers
	cout << "Questions Missed\tStudents Answers\tCorrect Answers\n";

	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		if(correctAnswers[i] != studentAnswers[i])
			cout << (i + 1) << "\t\t\t" << studentAnswers[i] << "\t\t\t" << correctAnswers[i] << endl;
	}

	//Show total number of questions missed
	cout << "\nTotal Number of Answers Missed: " << incorrect << endl << endl;

	//Show percentage of questions answered correctly
	double percentageCorrect = correct;
	cout << "Percentage of Correct Answers: " << fixed << showpoint << setprecision(2) << (percentageCorrect/ARRAY_SIZE)*100 << " %" << endl << endl;

	//Show if the student passed or failed
	if(correct >= 14)
		cout << "The student passed the exam.\n";
	else
		cout << "The student failed the exam.\n";

	return 0;
}

//Function to read in answers from txt files
void readAnswers(ifstream &fileAnswers, char numbers[], int size)
{
   for (int i = 0; i < size; i++)
      fileAnswers >> numbers[i];
}

//Function to check answers
void checkAnswers (char answers[], char replies[], int &correct, int &incorrect, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (answers[i] == replies[i])
			correct++;
		else
			incorrect++;
	}
}