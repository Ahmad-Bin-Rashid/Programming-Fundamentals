/*
 Program that calculates the common characters present in two strings entered
 by user.
*/

#include <iostream>
#include <cmath>
using namespace std;

int checkCommonCharacters (string word1, string word2);                   //function prototype

main()
{
	string word1;
	string word2;
	
	cout <<"Enter the first string: ";
	cin >> word1;
	cout <<"Enter the second string: ";
	cin >> word2;
	
	cout <<"Number of common characters: "<< checkCommonCharacters (word1, word2) << endl;
}


int checkCommonCharacters (string word1, string word2)

/*
 Function that finds the number of common characters in given two strings, 
 and then returns that count.
*/

{
	int size1 = word1.length();
	int size2 = word2.length();
	bool result = true;
	int count1 = 0;
	int count2 = 0;
	int sum = 0;
	int minimum; 
	char letter;
	
	for (int x = 0; x < size1; x++)
	{
		letter = word1[x];
		count1 = 0;
		count2 = 0;
		result = true;
		
		for (int i = 0; i < x; i++)
		{
			if (letter == word1[i])
				result = false;
		}
		if (result == false)
			continue;

		for (int y = 0; y < size1; y++)
		{
			if (letter == word1[y])
			{
				count1++;
			}
		}
		
		for (int z = 0; z < size2; z++)
		{
			if (letter == word2[z])
			{
				count2++;
			}
		}
		
		minimum = min(count1, count2);
		sum += minimum;
	}
	
	return sum;
}
