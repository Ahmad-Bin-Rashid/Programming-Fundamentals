/*
  Program that takes in an array of numbers and the length of cycle. All cycles begin 
  with the first element of the array. It will returns true if the array is repeating
  cycle or the cycle length is greater than the array length and returns false if the 
  array is not repeating cycle.
*/


#include <iostream>
#include <cmath>
using namespace std;

bool isRepeatingCycle (int size, int arr[], int cycle);                  //function prototype

main()
{
	int size;
	int cycle;
	bool result;
	
	cout <<"Enter the length of the array: ";
	cin >> size;
	
	int arr[size];
	
	cout <<"Enter the elements of the array: "<< endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout <<"Enter the length of the cycle: ";
	cin >> cycle;
	
	result = isRepeatingCycle (size, arr, cycle);
	
	cout <<"Output: "<< result << endl;
}

bool isRepeatingCycle (int size, int arr[], int cycle)

/*
  Fucntion that checks whether the array is repeating cycle or not.
*/

{
	if (cycle >= size)
		return true;
		
	else
	{
		for (int x = cycle; x < size; x++)
		{
			if (arr[x] != arr[x-cycle])
				return false;
		}
		return true;
	}
}

