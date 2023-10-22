/*
 Program that calculates the average price per ton of the cargo, and
 also what percentage of the cargo is transported in each vehicle.
*/

#include <iostream>
#include <iomanip>
using namespace std;

main()
{
    	int count;
    	int number;
    	int minibus = 0;
    	int truck = 0;
    	int train = 0;
    	float sum;
    	float buspercent;
    	float truckpercent;
    	float trainpercent;
    	float average;

    	cout <<"Enter the count of cargo for transportation: ";
    	cin >> count;

	for (int x = 1; x <= count; x += 1)
	{
		cout <<"Enter the tonnage of cargo "<< x <<": ";
		cin >> number;
		
		if (number <= 3)
		{
			minibus += number;
		}
		else if (number > 3 && number <= 11)
		{
			truck += number;
		}
		else if (number > 11)
		{
			train += number;
		}
	}
	
	sum = minibus + truck + train;
	average = ((minibus * 200) + (truck * 175) + (train * 120)) / sum;
	
	buspercent = minibus / sum * 100;
	truckpercent = truck / sum * 100;
	trainpercent = train / sum * 100;
		
	
	cout << fixed << setprecision(2)<< average << endl;
	cout << fixed << setprecision(2)<< buspercent <<"%"<< endl;
	cout << fixed << setprecision(2)<< truckpercent <<"%"<< endl;
	cout << fixed << setprecision(2)<< trainpercent <<"%"<< endl;

    
}
