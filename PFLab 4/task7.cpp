/*
 Program that determine whether the number enter
 by user is even or odd.
*/


#include <iostream>
using namespace std;

void result(int num);

main()
{
	int num;
	cout <<"Enter a number: ";
	cin >> num;
	result (num);            //function call
}

void result(int num)
{                         //when input number is disible by 2

	if (num % 2 == 0)
	{
		cout <<"Number "<< num <<" is even";
	}
                         //when input number isn't disible by 2

	if (num % 2 == 1)
	{
		cout <<"Number "<< num <<" is odd";
	}
}