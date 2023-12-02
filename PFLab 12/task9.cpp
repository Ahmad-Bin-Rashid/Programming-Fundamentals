/*
  Program that reads a matrix of the elements entered by user and finds the
  count of the total number of rows of the matrix with identical elements.
*/


#include <iostream>
using namespace std;

int countIdenticalArrays(int arr[][3], int size);                     //function prototype

main ()
{
    	int size;

    	cout <<"Enter the number of rows for the array: ";
    	cin >> size;

    	int array[size][3];

    	cout <<"Enter the elements of the array: "<< endl;
    	for (int x = 0; x < size; x++)
    	{
        	for (int y = 0; y < 3; y++)
        	{
            	cout <<"Enter element at position ["<< x <<"]["<< y <<"]: ";
            	cin >> array[x][y];
        	}
    	}

    	cout <<"The count of identical rows in the array is: "<< countIdenticalArrays(array, size)<< endl;
}

int countIdenticalArrays(int arr[][3], int size)

/*
  Function that calculates the number of rows of matrix with the identical 
  elements.
*/

{
	int count = 0;
    	for (int x = 0; x < size; x++)
    	{
        	if (arr[x][0] == arr[x][1] && arr[x][0] == arr[x][2])
        	{
        		count++;
	   	}
    	}
    	return count;
}
