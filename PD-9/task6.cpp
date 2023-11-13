/*
 Program that takes an array of colors columns and prints how long it takes to 
 color the whole pattern.
*/

#include <iostream>
using namespace std;

int coloringTime (string array[], int size);                                //function prototype

main()
{
	int size;
	
	cout <<"Enter the size of Array: ";
	cin >> size;
	
	string array[size];
	
	for(int i = 0; i < size; i++)
	{
		cout <<"Enter Element "<< i + 1 <<": ";
		cin >> array[i];
	}	
	cout <<"Time to color: "<< coloringTime (array, size) <<" seconds"<< endl;
}

int coloringTime (string array[], int size)

/*
 Program that takes an array of colors columns and prints how long it takes to 
 color the whole pattern.
*/

{
	int time1 = size * 2;
	int time2 = 0;
	int total;
	
	for (int x = 1; x < size; x++)
	{
		if (array[x] != array[x-1])
			time2++;
	}
	
	total = time1 + time2;
	return total;
}
