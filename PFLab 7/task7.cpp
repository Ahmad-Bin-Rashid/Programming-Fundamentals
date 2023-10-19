/*
 Program that prints the histogram of the numbers entered by user.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void calculatePercentage (int count);                      //funtion prototype

main() 
{
	int count;

	cout <<"Enter numbers count: ";
	cin >> count;

	calculatePercentage (count);                         //function call
}

void calculatePercentage (int count) 

/*
 Function that takes the count of the numbers, calculates the percentages
 and prints their histogram.
*/

{
	int num;
	float percent1 = 0;
	float percent2 = 0;
	float percent3 = 0;
	float percent4 = 0;
	float percent5 = 0;
	float p1;
	float p2;
	float p3;
	float p4;
	float p5;

	for (int x = 1; x <= count; x += 1) 
	{
		cout <<"Enter a number: ";
		cin >> num;

		if (num >= 0 && num < 200) 
		{
			percent1 += 1;
		}

		else if (num >= 200 && num < 400) 
		{
			percent2 += 1;
		}

		else if (num >= 400 && num < 600) 
		{
			percent3 += 1;
		}

		else if (num >= 600 && num < 800) 
		{
			percent4 += 1;
		}

		else if (num >= 800) 
		{
			percent5 += 1;
		}
	}

	
	p1 = (percent1 * 100) / count;
	p2 = (percent2 * 100) / count;
	p3 = (percent3 * 100) / count;
	p4 = (percent4 * 100) / count;
	p5 = (percent5 * 100) / count;

	cout << fixed << setprecision(2) << p1 << "%\n" ;
	cout << fixed << setprecision(2) << p2 << "%\n" ;
	cout << fixed << setprecision(2) << p3 << "%\n" ;
	cout << fixed << setprecision(2) << p4 << "%\n" ;
	cout << fixed << setprecision(2) << p5 << "%";
}

