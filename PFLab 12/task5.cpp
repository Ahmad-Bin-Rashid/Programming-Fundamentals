/*
  Program that reads a 3x3 matrix and check whether the matrix is an identity
  or not.
*/


#include <iostream>
using namespace std;

void printMatrix (int arr[][3], int size);                          //functions prototype
bool checkIdentity (int arr[][3], int size);

main()
{
    int size = 3;
    int matrix[size][3];
    bool result;

    cout <<"Enter the elements of the matrix: "<< endl;
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout <<"Enter element at position ["<< x <<"]["<< y <<"]: ";
            cin >> matrix[x][y];
        }
    }

    printMatrix (matrix, size);
    result = checkIdentity (matrix, size);
    if (result == true)
    {
        cout <<"The entered matrix is an identity matrix."<< endl;
    }
    else if (result == false)
    {
        cout <<"The entered matrix is NOT an identity matrix."<< endl;
    }
}

void printMatrix (int arr[][3], int size)

/*
  Function that prints the array in the matrix form.
*/

{
    cout <<"The matrix you entered is: "<< endl;
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < size; y++)
        {
            cout << arr[x][y] << "\t";
        }
        cout << endl;
    }
}

bool checkIdentity (int arr[][3], int size)

/*
  Function that check whether the matrix is identity or not.
*/

{
    int count1 = 0;
    int count2 = 0;
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < size; y++)
        {
            if (x == y && arr[x][y] == 1)
            {
                count1++;
            }
            else if (x != y && arr[x][y] != 1)
            {
                count2++;
            }
        }
    }
    if (count1 == 3 && count2 == 6)
    {
        return true;
    }
    else
    {
        return false;
    }
}
