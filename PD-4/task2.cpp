/*
 Program that changes true to false and false to
 true.
*/


#include <iostream>
using namespace std;

void Reverse (string expression);      //Function prototype

main ()
{

	string expression;


	cout <<"Enter 'true' or 'false': ";
	cin >> expression;


	Reverse (expression);      //Function call
}


void Reverse (string expression)

/*
 Function that display "true" on the screen if user
 enters 'false' and "false" if he enters 'true'.
*/


{
	if (expression == "false")
	{
		cout <<"true";
	}


	if (expression == "true")
	{
		cout <<"false";
	}
}