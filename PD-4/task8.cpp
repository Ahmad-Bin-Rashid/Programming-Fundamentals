/*
 Program that reads the holildays per year of Tom's owner
 tells whether Tom cat can sleep well and how much is the
 difference from the norm of games that Tom has i.e. 30000
 minutes per year.
*/


#include <iostream>
using namespace std;

void petPlay (int holidays);      //Function prototype

main ()
{

	int holidays;


	cout <<"Holidays: ";
	cin >> holidays;


	petPlay (holidays);      //Function call
}


void petPlay (int holidays)

/*
 Function that prints whether Tom cat can sleep well
 or not.
*/


{
	int workdays = 365 - holidays;
	int minutes = (workdays * 63) + (holidays * 127);

	if (minutes > 30000)
	{
		minutes = (minutes - 30000);

		cout <<"Tom will run away"<<endl;
		cout << minutes / 60 <<" hours and "<< minutes % 60<<" minutes for play";
	}


	else
	{
		minutes = (30000 - minutes);

		cout <<"Tom sleeps well"<<endl;
		cout << minutes / 60 <<" hours and "<< minutes % 60<<" minutes less for play";
	}
}