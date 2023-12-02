/*
  Program that takes an array of numbers and determines whether the number in the 
  array can be rearranged to form a consecutive list of numbers where each number
  appears exactly once.
*/


#include <iostream>
using namespace std;

bool checkConsecutive (int arr[], int size);                         //function prototype

main()
{
	int size;
	int result;
	
	cout <<"Enter the length of the array: ";
	cin >> size;
	
	int arr[size];
	
	cout <<"Enter the elements of the array: "<< endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	result = checkConsecutive (arr, size);
	
	cout <<"Can be arranged : "<< result << endl;
}

bool checkConsecutive (int arr[], int size)

/*
  Function that returns true if the number in the array can be rearranged to form a
  consecutive list of numbers where each number appears exactly once, otherwise false.
*/

{
	int temp;
	
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size-1; y++)
		{
			if (arr[y] > arr[y+1])
			{
				temp = arr[y];
				arr[y] = arr[y+1];
				arr[y+1] = temp;
			}
		}
	}
	
	for (int z = 0; z < size-1; z++)
	{
		if (arr[z]+1 != arr[z+1])
			return false;
	}
	return true;
}
