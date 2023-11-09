/*
 Program that takes n numbers from the user, stores them in an array
 and passes them to a function that prints them in reverse order.
*/

#include <iostream>
using namespace std;

void reverseArray(int array[], int num);                     //function prototype

main()
{
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;

    int array[num];

    if (num <= 0)
        cout <<"Invalid input. Number of elements must be greater than 0."<< endl;

    else
    {
        cout <<"Enter "<< num <<" numbers, one per line: "<< endl;
        for (int x = 0; x < num; x++)
        {
            cin >> array[x];
        }
    }

    reverseArray(array, num);                                   //function call
}

void reverseArray(int array[], int num)

/*
 Function that takes the array of numbers and prints them in the
 reverse order.
*/

{
    cout <<"Numbers in reverse order: ";
    for (int y = num - 1; y >= 0; y--)
    {
        cout << array[y] <<" ";
    }
    cout << endl;
}
