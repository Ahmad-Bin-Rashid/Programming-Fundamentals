/*
 Program that determines whether the array is special or not.
*/

#include <iostream>
using namespace std;

bool specialArray(int array[], int num);

main()
{
    	int num;
    	bool result;

    	cout << "Enter the size of the array: ";
    	cin >> num;

    	int array[num];

    	if (num <= 0)
        	cout <<"Invalid input. Number of elements must be greater than 0."<< endl;

    	else
    	{
        	cout <<"Enter "<< num <<" elements of the array: "<< endl;
      	for (int x = 0; x < num; x++)
        	{
            	cin >> array[x];
        	}
    	}

    	result = specialArray(array, num);
    	
    	if (result == true)
    	{
    		cout <<"The array is special";
	}
	else if (result == false)
	{
		cout <<"The array is not special";
	}
}

bool specialArray(int array[], int num)

/*
 Function that determines whether the array is special or not.
*/

{
	bool result;
    	for (int x = 0; x < num; x += 2)
    	{
		if (x % 2 == array[x] % 2)
		{
			result = true;
		}
		else
		{
			result = false;
			return result;
		}
    	}
    	
    	for (int y = 1; y < num; y += 2)
    	{
		if (y % 2 == array[y] % 2)
		{
			result = true;
		}
		else
		{
			result = false;
		}
    	}
    	return result;
}
