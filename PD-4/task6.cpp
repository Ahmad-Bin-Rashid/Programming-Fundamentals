/*
 Program that determines and prints the duration that 
 is longest.
*/


#include <iostream>
using namespace std;

void longestTime (int hours, int mins);      //Function prototype

main ()
{

	int hours;
	int minutes;


	cout <<"Enter the number of hours: ";
	cin >> hours;
	cout <<"Enter the number of minutes: ";
	cin >> minutes;


	longestTime (hours, minutes);      //Function call
}


void longestTime (int hours, int mins)

/*
 Function that displays the value whose duration is 
 longest.
*/


{
	if (hours * 60 > mins)
	{
		cout << hours;
	}


	if (mins > hours * 60)
	{
		cout << mins;
	}
}