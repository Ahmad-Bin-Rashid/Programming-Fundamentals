/*
  Program that takes an array of directions to spin, "left" or "right" 
  and tells how many full 360 degree rotations will be made. Each word
  in the array counts as a 90 degree rotation in that direction.
*/


#include <iostream>
#include <cmath>
using namespace std;

int calculateRotation (int size, string arr[]);              //function prototype

main()
{
	int size;
	int result;
	
	cout <<"Enter the length of the array: ";
	cin >> size;
	
	string arr[size];
	
	cout <<"Enter the elements of the array (\"left\" or \"right\"): "<< endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	result = calculateRotation (size, arr);
	
	cout <<"Number of full rotations: "<< result << endl;
}

int calculateRotation (int size, string arr[])

/*
  Function that returns how many full rotations will be made.
*/

{
	string word;
	float rotation = 0;
	int result;
	
	for (int x = 0; x < size; x++)
	{
		word = arr[x];
		if (word == "left")
			rotation += 0.25;
			
		else if (word == "right")
			rotation -= 0.25;
	}
	
	result = abs(rotation);
	return result;
}
