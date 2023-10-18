/*
 Program that calculates how many times Vladimir has played volleyball
 throughout the year.
*/

#include <iostream>
#include <cmath>
using namespace std;

int calculateVolleyball (string year, int holiday, int weekend);       //function prototype

main()
{
    	string year;
	int holiday;
	int weekend;
	int result;

    	cout <<"Enter year type: ";
    	cin >> year;
    	cout <<"Enter number of holidays: ";
    	cin >> holiday;
    	cout <<"Enter number of weekends: ";
    	cin >> weekend;

    	result = calculateVolleyball (year, holiday, weekend);            //funtion call
	cout << result;
}

int calculateVolleyball (string year, int holiday, int weekend)

/*
 Functon that takes the type of year, the count of holidays and
 the count of weekends he travels to his homeland as input and
 calculates how many times he has played volleyball throughout
 the year.
*/

{
	int weekends = 48;
	float weekPercent;
	float weektotal;
	float holidayPercent;
	float total;
    	float result;
    	float leap;
    	
	weektotal = (weekends - weekend);
	weekPercent = weektotal * 0.75;
	holidayPercent = (holiday * 2) / 3;
	total = holidayPercent + weekPercent + weekend;
	leap = total * 0.15;
    	
    	if (year == "normal")
    	{
		result = floor(total);
	}
	
	if (year == "leap")
	{
		total = total + leap;
		result = floor(total);
	}
	return result;
}
