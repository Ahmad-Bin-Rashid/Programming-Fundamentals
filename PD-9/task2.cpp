/*
 Program that takes an array of numbers as input from the user and
 then prints "Boom!" if the digit 7 appears in the array. Otherwise,
 print "there is no 7 in the array".
*/

#include <iostream>
using namespace std;

string containSeven (int numbers[], int size);                     //function prototype

main()
{
	int size;
	
	cout <<"Enter the size of Array: ";
	cin >> size;
	
	int numbers[size];
	
	for(int i = 0; i < size; i++)
	{
		cout <<"Enter Element "<< i + 1 <<": ";
		cin >> numbers[i];
	}
	
	cout << containSeven (numbers, size) << endl;                 //function call
}

string containSeven (int numbers[], int size)

/*
 Function that prints "Boom!" if the digit 7 appears in the array otherwise
 prints "there is no 7 in the array".
*/

{
	string result;
	bool check = false;
	int num, num1, num2;
	
	for (int x = 0; x < size; x++)
	{
		num = numbers[x];
		
		if (num < 10)
		{
			if (num == 7)
			{	
				check = true;
			}	
		}
		
		
		if (num > 9 and num < 100)
		{
			num1 = num / 10;
			num2 = num % 10;
			if (num1 == 7 or num2 == 7)
			{
				check = true;
			}
		}
	}
	if (check == true)
		result = "Boom!";
	
	else if (check == false)
		result = "there is no 7 in the array";
		
	return result;
}
