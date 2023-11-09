/*
 Program that takes n numbers from the user, stores them in an array
 and call a function that returns the largest number entered by the 
 user.
*/

#include <iostream>
using namespace std;

void largestNumber(int array[], int num);                         //function prototype

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

    largestNumber(array, num);                                      //function call
}

void largestNumber(int array[], int num)

/*
 Function that takes an array and return the largest number present
 in the array.
*/

{
    	cout <<"The largest number entered is: ";
    	int large = array[0];
    	for (int y = 1; y < num; y++)
    	{
		if (large < array[y])
		{
      		large = array[y];
      	}
    	}
    	cout << large;
}
