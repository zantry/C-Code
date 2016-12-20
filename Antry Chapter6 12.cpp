//Programming Challenge 12: Star Search
#include <iostream>
#include <iomanip>
using namespace std;

void getJudgeData(double &score) //Function to get judges scores
{
	cout << "Enter the judge's score.\n"; //Prompt to ask for score
	cin >> score; //Get score

	if(score < 0 || score > 10) //Input validation
	{
		cout << "The judge's score cannot be less than 0 or greather than 10.\n";
		cout << "Please re-enter the judge's score.\n";
		cin >> score;
	}
}

int findLowest(double score1, double score2, double score3, double score4, double score5) //Function to find lowest scores
{
	if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
		return score1;
	else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
		return score2;
	else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
		return score3;
	else if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
		return score4;
	else 
		return score5;

}

int findHighest(double score1, double score2, double score3, double score4, double score5) //Function to find highest scores
{
	if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
		return score1;
	else if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5)
		return score2;
	else if (score3 > score1 && score3 > score2 && score3 > score4 && score3 > score5)
		return score3;
	else if (score4 > score1 && score4 > score2 && score4 > score3 && score4 > score5)
		return score4;
	else 
		return score5;
}

void calcScore(double score1, double score2, double score3, double score4, double score5) //Function to calculate score
{
	double minScore = findLowest(score1, score2, score3, score4, score5);  //Call and pass scores through findLowest function  															
	double maxScore = findHighest(score1,score2,score3,score4,score5);  //Call and pass scores through findHighest function
	double sumScore = score1 + score2 + score3 + score4 + score5; //Sum the scores
	sumScore -= minScore; //Drop the lowest score
	sumScore -= maxScore; //Drop the highest score
	cout << "The performer's score is: " << fixed << showpoint << setprecision(1) << sumScore/3 << endl; //Display the performers average score
}

int main()

{
	double judge1, judge2, judge3, judge4, judge5; //Variables

	getJudgeData(judge1); //getJudegeData function called by main once for each of the 5 judges
	getJudgeData(judge2);
	getJudgeData(judge3);
	getJudgeData(judge4);
	getJudgeData(judge5);

	calcScore(judge1, judge2, judge3, judge4, judge5); //calcScore function called 
	return 0;
}