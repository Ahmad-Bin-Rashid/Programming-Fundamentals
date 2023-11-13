/*
 Program that takes the string array from the user and prints true if 
 all elements in the array are identical and false otherwise.
*/

#include <iostream>
using namespace std;

bool checkIdenticalElements (string array[], int size);                   //function prototype

main()
{
	int size;
	
	cout <<"Enter the size of Array: ";
	cin >> size;
	
	string array[size];
	
	for(int i = 0; i < size; i++)
	{
		cout <<"Enter Element "<< i + 1 <<": ";
		cin >> array[i];
	}	
	cout << checkIdenticalElements (array, size);                         //function call
}


bool checkIdenticalElements (string array[], int size)

/*
 Function that checks the string array and prints true if all elements in the 
 array are identical and false otherwise.
*/

{
	int check = 0;
	string word = array[0];
	
	for (int x = 1; x < size; x++)
	{
		if (word != array[x])
		{
			check++;
		}
	}
	
	if (check == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
