/*
 Program that takes the correct and actually typed phrases from the user
  and shows the broken keys.
*/

#include <iostream>
using namespace std;

string findBrokenKeys (string correct, string actual);                //functions prototype
bool checkRepeatness (string key, char letter);

main()
{
	string correct;
	string actual;
	
	cout <<"Enter the correct phrase: ";
	getline(cin, correct);
	cout <<"Enter what you actually typed: ";
	getline(cin, actual);
	
	cout <<"Broken keys: "<< findBrokenKeys(correct, actual) << endl;
}

string findBrokenKeys (string correct, string actual)

/*
 Function that takes the correct and actually typed phrases and returns
 the broken keys.
*/

{
	int size = correct.length();
	string key = "";
	char letter;
	bool result;
	
	for (int x = 0; x < size; x++)
	{
		result = false;
		if (correct[x] != actual[x])
		{
			letter = correct[x];
			result = checkRepeatness (key, letter);              //function call
			
			if (result == true)
				key += letter;
		}
		else 
		{
			continue;
		}
	}
	
	return key;
}

bool checkRepeatness (string key, char letter)

/*
 Function that takes the broken key and checks whether the specific letter
 repeates in the key or not.
*/

{
	int size = key.length();
	for (int i = 0; i < size; i++)
	{
		if (letter == key[i])
		{
			return false;
		}
	}
	return true;
}
