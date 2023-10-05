/*
 Program that tells whether the three digit number is 
 symmetrical or not.
*/


# include <iostream>
using namespace std;

bool IsSymmetrical (int number);                      //function prototype
 
main()
{
	int number;
	bool result;

	cout <<"Enter a three-digit number: ";
	cin >> number;

	result = IsSymmetrical (number);               //function call
	if (result == 1)
	{
		cout <<"The number is symmetrical.";
	}
	if (result == 0)
	{
		cout <<"The number is not symmetrical.";
	}
}

bool IsSymmetrical (int number)

/*
function that takes a number as an argument and returns true or
false depending on whether the number is symmetrical or not.
*/

{
	int num1 = number % 10;
	int num2 = (number % 100) - num1;
	int num3 = ((number % 1000) - num2 - num1) / 100;

	if (num1 == num3)
	{return true;}
	if (num1 != num3)
	{return false;}

}