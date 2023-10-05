/*
 Program that checks whether the alphabet 'A' entered
by the user is in small case or in capital case. 
*/


# include <iostream>
using namespace std;

string checkAlphabetCase (char character);               //function prototype

main()
{
	char character;
	string caseCheck;

	cout <<"Enter a character (A/a): ";
	cin >> character;

	caseCheck = checkAlphabetCase (character);           //function call 
	cout << caseCheck;
}

string checkAlphabetCase (char character)

/*
 Function that checks whether the alphabet A entered by the user
 is in small case or in capital case and returns the string.
*/

{
	if (character == 'A')
	{
		string capital ="You have entered Capital A";
		return capital;
	}
	if (character == 'a')
	{
		string small ="You have entered small a";
		return small;
	}

}