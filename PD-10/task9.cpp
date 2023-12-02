/*
  Program that takes an array of non-negative integers and returns the special
  number if the array is special, othewise returns -1. The array will be considered
  special if there exists a number "x" such that there are exactly "x" numbers in
  the array that are greater than or equal to "x".
*/


#include <iostream>
using namespace std;

int calculateSpecial (int size, int arr[]);            //function prototype

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
	
	result = calculateSpecial (size, arr);
	
	cout <<"Special value: "<< result << endl;
}

int calculateSpecial (int size, int arr[])

/*
  Function that returns the special number if the array is special
  and -1 otherwise.
*/

{
	int count = 0;
	
	for (int x=0; x <= size; x++)
	{
		count = 0;
		for (int y=0; y < size; y++)
		{
			if (x <= arr[y])
			{
				count++;
			}
		}
		if (count == x)
			return x;
	}
	return -1;
}
