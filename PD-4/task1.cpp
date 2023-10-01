/*
 Program that determine whether two numbers input by user
 are equal or not.
*/


#include <iostream>
using namespace std;

void IsEqual (int num1, int num2);      //Function prototype

main ()
{

	int number1;
	int number2;


	cout <<"Enter the first number: ";
	cin >> number1;
	cout <<"Enter the second number: ";
	cin >> number2;


	IsEqual (number1, number2);      //Function call
}


void IsEqual (int num1, int num2)

/*
 Function that display "true" on the screen if the
 input numbers are equal and "false" if they are 
 not equal.
*/


{
	if (num1 == num2)
	{
		cout <<"true";
	}


	if (num1 != num2)
	{
		cout <<"false";
	}
}