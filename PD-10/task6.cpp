/*
  Program that is given an input string. Its objective is to reverse the string 
  word by word, the first will be the last and so on.
*/


#include <iostream>
using namespace std;

string reverseWords (string sentence);                  //function prototype

main()
{
	string sentence;
	string result;
	
	cout <<"Enter a string: ";
	getline(cin, sentence);
	
	result = reverseWords (sentence);
	cout <<"Reversed string: "<< result;
}

string reverseWords (string sentence)

/*
  Function that reverse the string word by word of the sentence entered
  by user.
*/

{
	string word = "";
	string result = "";
	int size = sentence.length();
	
	for (int x = size-1; x >= 0; x--)
	{
		if (sentence[x] == ' ')
		{
			result += word + " ";
			word = "";
		}
		else
		{
			word = sentence[x] + word;
		}
	}
	result += word;
	return result;
}


