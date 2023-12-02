/*
  Program that reads a user defined matrix with column size always 3 and 
  passes that 2D array along with its row size to a function named calculateSum
  that prints the sum of elements of that matrix.
*/


#include <iostream>
using namespace std;

int calculateSum(int arr[][3], int size);                         //function prototype

main ()
{
    int size;

    cout <<"Enter row size: ";
    cin >> size;

    int array[size][3];

    cout <<"Enter the elements of the matrix: "<< endl;
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout <<"Enter element at position ["<< x <<"]["<< y <<"]: ";
            cin >> array[x][y];
        }
    }

    cout <<"The sum of elements in the matrix is: "<< calculateSum(array, size);
}

int calculateSum(int arr[][3], int size)

/*
  Function that calculates and returns the sum of the 2D array.
*/

{
    int sum = 0;
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            sum += arr[x][y];
        }
    }
    return sum;
}
