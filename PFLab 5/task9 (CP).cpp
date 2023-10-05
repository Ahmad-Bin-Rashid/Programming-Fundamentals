/*
 program that takes the current time in hours and minutes 
 (in the 24-hour format) and calculates the precise time 
 you'll land in after time-traveling 15 minutes into the 
 future. Program should then display the future time 
 in the "hh:mm" format.
*/


# include <iostream>
using namespace std;

int timeTravel (int hours, int mins);                      //function prototype

main()
{
	int hours;
	int mins;
	int result;

	cout <<"Enter Hours: ";
	cin >> hours;
	cout <<"Enter Minutes: ";
	cin >> mins;

	result = timeTravel (hours, mins);               //function call
	
	if (result > 1439)
	{
		result = result - 1440;
		cout <<result / 60 <<":"<< result % 60;
	}

	else
	{
		cout << result / 60 <<":"<< result % 60;
	}
}

int timeTravel (int hours, int mins)

/*
 function that calculates the time adding 15 minutes in
 it.
*/

{
	int result = (hours * 60) + mins;
	result = result + 15;
	return result;
}