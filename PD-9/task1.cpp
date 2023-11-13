/*
 Program that calculates the length of string entered by user
 and return true if the length is even and false if the length
 is odd.
*/

#include <iostream>
using namespace std;

bool isLengthEven (string word);                       //function prototype

main() 
{
	string word;
	
	cout <<"Enter a String: ";
	cin >> word;
	
	cout << isLengthEven (word);                     //function call
}

bool isLengthEven (string word)

/*
 Function that returns true if length is even and false if length is
 odd.
*/

{
	int size = word.length();
	int length = 0;
	
	for (int i = 0; i < size; i++)
	{
		length++;
	}
	
	if (length % 2 == 0)
		return true;
	else if (length % 2 != 0)
		return false;
}
