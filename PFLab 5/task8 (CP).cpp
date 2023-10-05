/*
 Program that determines whether a number is Oddish or Evenish. 
 A number is Oddish if the sum of all of its digits is odd, 
 and a number is Evenish if the sum of all of its digits is even.
*/


# include <iostream>
using namespace std;

string OddishOrEvenish (int number);                      //function prototype

main()
{
	int number;
	string result;

	cout <<"Enter a five-digit number: ";
	cin >> number;

	result = OddishOrEvenish (number);               //function call
	cout << result;
}

string OddishOrEvenish (int number)

/*
 function that determines whether a number is Oddish
 or Evenish.
*/


{
	string result;
	int num1 = number % 10;
	int num2 = (number % 100) - num1;
	int num3 = (number % 1000) - num2 - num1;
	int num4 = (number % 10000) - num3 - num2 - num1;
	int num5 = (number % 100000) - num4 - num3 - num2 - num1;
	int sum = (num5 / 10000) + (num4 / 1000) + (num3 / 100) + (num2 / 10) + num1;
	
	if (sum % 2 == 1)
	{
		result ="Oddish";
		return result;
	}
	if (sum % 2 == 0)
	{
		result ="Evenish";
		return result;
	}	

}