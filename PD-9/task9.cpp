/*
 Program that takes an array of words from the user and shows the longest
 word in that array that can fit on the 7-segment display.
*/

#include <iostream>
using namespace std;

string longestSegment (string array[], int size);                 //functions prototype
bool checkValidity (string word, int size);

main()
{
	int size;
	string result;
	
	cout <<"Enter the number of words: ";
	cin >> size;
	
	string words[size];
	
	cout <<"Enter the words, one by one: "<< endl;
	for (int x = 0; x < size; x++)
	{
		cin >> words[x];
	}
	
	result = longestSegment (words, size);                   //function call
	cout <<"Longest 7-segment word: "<< result << endl;
}

string longestSegment (string array[], int size)

/*
 Function that takes an array of words and returns the longest
 word in that array that can fit on the 7-segment display.
*/

{
	string word;
	string result = "";
	int count1 = 0;
	int count2 = 0;
	bool check;
	
	for (int x = 0; x < size; x++)
	{
		check = false;
		word = array[x];
		count1 = word.length();
		count2 = result.length();
		
		check = checkValidity (word, count1);                //function call
		
		if (check == true and count1 > count2)
			result = array[x];
	}
	
	return result;
		
}

bool checkValidity (string word, int size)

/*
 Function that check whether the word from the array can fit on 
 7-segment display or not.
*/

{
	for (int i = 0; i < size; i++)
	{
		char letter = word[i];
		if (letter == 'k' or letter == 'm' or letter == 'v' or letter == 'w' or letter == 'x')
			return false;	
			
	}
	return true;	
}


