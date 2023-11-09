/*
 Program that takes a string and returns a new string with all vowels
 removed.
*/

#include <iostream>
using namespace std;

void removeVowels (string word);                   //function prototype
main()
{
	string word;
	
	cout <<"Enter a string: ";
	getline(cin, word);
	
	removeVowels(word);                           //function call
}

void removeVowels (string word)

/*
 Function that takes a string and returns a new string with all vowels
 removed.
*/

{
	cout <<"String with vowels removed: ";
	
	int count = word.length();
    	int ascii;
    	char removed;
    	
	for (int x = 0; x < count; x++)
	{
		ascii = word[x];
		if ((ascii == 65) || (ascii == 69) || (ascii == 73) || (ascii == 79) || (ascii == 85) || (ascii == 97) || (ascii == 101) || (ascii == 105) || (ascii == 111) || (ascii == 117))
		{
			ascii = 0;
		}
		else
		{
			removed = ascii;
			cout << removed;
		}
	}
}
