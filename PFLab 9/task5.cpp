/*
 Program that takes n numbers from the user, stores them in an array
 prints "Already Entered" if the user has already entered that number
 and prints the unique numbers in reverse order.
*/

#include <iostream>
using namespace std;

void reverseArray(int array[], int size);                          //functions prototype
bool isAlreadyEntered(int array[], int number, int size);

main()
{
    	int size1;
    	bool result = false;

    	cout << "Enter the number of elements: ";
    	cin >> size1;

    	int array[size1];

    	if (size1 <= 0)
        	cout <<"Invalid input. Number of elements must be greater than 0."<< endl;

    	else
    	{
        	cout <<"Enter "<< size1 <<" numbers, one per line: "<< endl;
        	for (int x = 0; x < size1; x++)
        	{
			cin >> array[x];
            	result = isAlreadyEntered(array, array[x], x);
            	if (result == true)
            	{
                		cout <<"Already Entered: "<< array[x] << endl;

			}
			result = false;
        	}
        	
        	int size2 = 0;
        	int unique[size1];
        	for (int y = 0; y < size1; y++)
        	{
        		result = isAlreadyEntered (array, array[y], size2);
        		if (result == false)
        		{
        			unique[size2] = array[y];
        			size2 += 1;
			}
		}
        		
        	reverseArray(unique, size2);                               
    	}
}

void reverseArray(int array[], int size)

/*
 Function that takes the array of numbers and prints them in the
 reverse order.
*/

{
    	cout <<"Unique numbers entered: ";
	int count;
    	for (int i = 0; i < size; i++)
    	{
      	cout << array[i] <<" ";
    	}
    	cout << endl;
}

bool isAlreadyEntered(int array[], int number, int size)

/*
 Function that takes the array of numbers and check if the number
 is already present in the array or not.
*/

{
	bool result = false;
    	for (int z = 0; z < size; z++)
    	{
        	if (number == array[z])
        	{
            	result = true;
        	}
    	}
    	return result;
}
