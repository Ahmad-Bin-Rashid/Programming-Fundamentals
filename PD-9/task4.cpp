/*
 Program that takes an array from the user and performs as even-odd transform to it, n times
 and displays it after transformation.
*/

#include <iostream>
using namespace std;

void evenOddTransform (int arr[], int size, int count);                               //function prototype

main()
{
	int size;
	int count;
	
	cout <<"Enter the size of Array: ";
	cin >> size;
	
	int array[size];
	
	for(int i = 0; i < size; i++)
	{
		cout <<"Enter Element "<< i + 1 <<": ";
		cin >> array[i];
	}
	
	cout << "Enter number of times even-odd transformation need to be done: ";
	cin >> count;
	
	evenOddTransform (array, size, count);                                  //function call
}

void evenOddTransform (int arr[], int size, int count)

/*
 Function that performs an even-odd transform to a given array, n times. One transformation is
 to add 2 to each odd integer and subtract 2 to each even integer.
*/

{
	int number;
	
	for (int x = 0; x < count; x++)
	{
		for (int y = 0; y < size; y++)
		{
			number = arr[y];
			if (number % 2 == 1)
				number += 2;
				
			else if (number % 2 == 0)
				number -= 2;
				
			arr[y] = number;
		}
	}
	
	cout <<"[";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i < size - 1)
			cout <<", ";
	}
	cout <<"]" << endl;
}




