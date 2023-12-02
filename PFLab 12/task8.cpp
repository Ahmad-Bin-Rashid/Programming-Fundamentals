/*
  Program that reads a matrix of the elements entered by user, finds the column
  with the largest sum and switches it with the first column in matrix.
*/


#include <iostream>
using namespace std;

void printMatrix (int arr[][5], int size);                           // function prototypes
void printEditedMatrix (int arr[][5], int size);

main ()
{
    int size;

    cout <<"Enter row size: ";
    cin >> size;

    int array[size][5];

    cout <<"Enter the elements of the matrix: "<< endl;
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout <<"Enter element at position ["<< x <<"]["<< y <<"]: ";
            cin >> array[x][y];
        }
    }
    cout << endl;
    cout << "Original Matrix: "<< endl;
    printMatrix (array, size);
    printEditedMatrix (array, size);
}

void printMatrix (int arr[][5], int size)

/*
  Function that takes the array and prints it in the matrix form.
*/

{
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout << arr[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void printEditedMatrix (int arr[][5], int size)

/*
  Function that reads a matrix of the elements entered by user, finds the column
  with the largest sum and switches it with the first column in matrix.
*/

{
    int sum = 0;
    int temp, index;
    int greatest = 0;
    for (int x = 0; x < 5; x++)
    {
        sum = 0;
        for (int y = 0; y < size; y++)
        {
            sum += arr[y][x] ;
        }
        if (sum > greatest)
        {
            greatest = sum;
            index = x;
        }
    }
    
    for (int y = 0; y < size; y++)
    {
    		temp = arr[y][index];
    		arr[y][index] = arr[y][0];
    		arr[y][0] = temp;
    }
    
    cout <<"Matrix after largest column moved to first: "<< endl;
    printMatrix (arr, size);
}
