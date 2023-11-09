/*
 Program that takes two arrays and inserts the second array in the middle of the
 first array. The first array has always two elements.
*/

#include <iostream>
using namespace std;

void insertArray(double array1[], int count1, double array2[], int count2);

main()
{
    	int count1;
    	int count2;

    	cout << "Enter the number of elements for the first array (must be 2): ";
    	cin >> count1;

    	double array1[count1];

    	if (count1 <= 0)
        	cout <<"Invalid input. Number of resistors must be greater than 0."<< endl;

    	else
    	{
        	cout <<"Enter "<< count1 <<" elements for the first array, one per line: "<< endl;
        	for (int x = 0; x < count1; x++)
        	{
            	cin >> array1[x];
        	}
    	}
    
    	cout << "Enter the number of elements for the second array: ";
    	cin >> count2;

    	double array2[count2];

    	if (count2 <= 0)
        	cout <<"Invalid input. Number of elements must be greater than 0."<< endl;

    	else
    	{
        	cout <<"Enter "<< count2 <<" elements for the second array, one per line: "<< endl;
        	for (int y = 0; y < count2; y++)
        	{
            	cin >> array2[y];
        	}
    	}

    	insertArray(array1, count1, array2, count2);                                  //function call
}

void insertArray(double array1[], int count1, double array2[], int count2)

/*
 Function that takes two arrays and inserts the second array in the middle of the
 first array.
*/

{
    	cout <<"Resulting array: ["<< array1[0] <<", ";
    	
    	for (int i = 0; i < count2; i++)
    	{
    		cout << array2[i] << ", ";
    	}
    	cout << array1[1] <<"]" << endl;
}





