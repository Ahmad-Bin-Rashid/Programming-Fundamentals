/*
 Program that converts a number in the range of [1 ... 99] into
text (in English).
*/


#include <iostream>
using namespace std;

string oneToNine (int num);                      //function prototypes
string twentyOnwards (int num);
string tenToNineteen (int number);

main()
{
	int number;
	string english;
	
	cout <<"Enter a number (1-99): ";
	cin >> number;
	
	if (number < 10)
	{                                         //calling functions
		english = oneToNine (number);
		cout << english;
	}
	
	if (number > 9 && number <20)
	{
		english = tenToNineteen (number);
		cout << english;
	}

	if (number > 19)
	{
		english = twentyOnwards (number);
		cout << english;
	}
}

string oneToNine (int num)

/*
function that converts numbers 1-9 into text in
English.
*/

{
	string english;
	
	if (num == 1)
	{
		english = "One";
		return english;
	}

	if (num == 2)
	{
		english = "Two";
		return english;
	}

	if (num == 3)
	{
		english = "Three";
		return english;
	}

	if (num == 4)
	{
		english = "Four";
		return english;
	}

	if (num == 5)
	{
		english = "Five";
		return english;
	}

	if (num == 6)
	{
		english = "Six";
		return english;
	}

	if (num == 7)
	{
		english = "Seven";
		return english;
	}

	if (num == 8)
	{
		english = "Eight";
		return english;
	}

	if (num == 9)
	{
		english = "Nine";
		return english;
	}
}

string tenToNineteen (int num)

/*
function that converts numbers 10-19 into text in
English.
*/

{
	string english;
	
	if (num == 10)
	{
		english = "Ten";
		return english;
	}

	if (num == 11)
	{
		english = "Eleven";
		return english;
	}

	if (num == 12)
	{
		english = "Twelve";
		return english;
	}

	if (num == 13)
	{
		english = "Thirteen";
		return english;
	}

	if (num == 14)
	{
		english = "Forteen";
		return english;
	}

	if (num == 15)
	{
		english = "Fifteen";
		return english;
	}

	if (num == 16)
	{
		english = "Sixteen";
		return english;
	}

	if (num == 17)
	{
		english = "Seventeen";
		return english;
	}

	if (num == 18)
	{
		english = "Eighteen";
		return english;
	}

	if (num == 19)
	{
		english = "Nineteen";
		return english;
	}
}


string twentyOnwards (int num)

/*
function that converts numbers 20-99 into text in
English.
*/

{
	int num1 = num % 10;
	int num2 = num - num1;
	string english;
	string english1;
	string english2;	

	english2 = oneToNine (num1);

	if (num2 == 20)
	{
		english1 = "Twenty";
	}

	if (num2 == 30)
	{
		english1 = "Thirty";
	}

	if (num2 == 40)
	{
		english1 = "Forty";
	}

	if (num2 == 50)
	{
		english1 = "Fifty";
	}

	if (num2 == 60)
	{
		english1 = "Sixty";
	}

	if (num2 == 70)
	{
		english1 = "Seventy";
	}

	if (num2 == 80)
	{
		english1 = "Eighty";
	}

	if (num2 == 90)
	{
		english1 = "Ninty";
	}

	english = english1 + english2;
	return english;
}