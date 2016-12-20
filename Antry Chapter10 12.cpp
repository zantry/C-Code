#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password; //String to hold user password
	int upperCase = 0, lowerCase = 0, digit = 0; //Variables
	
	cout << "This program will verify your password.\n\n"; //Explanation of program verification criteria
	cout << "The password should be at least six characters long.\n";
	cout << "The password must contain at least one upper case \n";
	cout << "and at least one lower case character.\n";
	cout << "The password must have at least one digit.\n\n";
	
	do{
		cout << "Please enter your password:\n"; //Prompt for Password

		getline(cin, password); //Get Password

		cout << endl;

		for(int index = 0; index < password.size(); index++) //Loop to go through each character in the string
		{
			if(isupper(password[index])) //Check for upper case character
		 {
			   upperCase++;
		 }

			if(islower(password[index])) //Check for lower case character
		{
			 lowerCase++;
		 }

			if(isdigit(password[index])) //Check for digit
		{
			 digit++;
		 }
		}

		if(password.size() < 6) //If password string is less than 6 characters long display prompt
		{
			cout << "Your password must be at least 6 characters long.\n\n";
		}

		if(upperCase == 0) //If no upper case characters identified display prompt
		{
			cout << "Your password must contain at least one upper case character.\n\n";
		}

		if(lowerCase == 0) //If no lower case characters identified display prompt
		{
			cout << "Your password must contain at least one lower case character.\n\n";
		}

		if(digit == 0) //If no lower case characters identified display prompt
		{
			cout << "Your password must contain at least one digit.\n\n";
		}

	}while(password.size() < 6 || upperCase == 0 || lowerCase == 0 || digit == 0); //Continue the loop until all password criteria met!
	

	cout << "Congratulations! Your password has been verified!\n\n"; //Prompt to show password is verified.

	return 0;
}

