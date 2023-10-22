/*
 Program that calculates for a given period of time, the count of treated
 and untreated patients in a hospital.
*/

#include <iostream>
using namespace std;

main()
{
    	int count;
    	int number;
    	int doctors = 7;
    	int treated = 0;
    	int untreated = 0;

    	cout <<"Enter Number of days you visited Hospital: ";
    	cin >> count;

	for (int x = 1; x <= count; x += 1)
	{
		cout <<"Number of patients who visited hospital on Day "<< x <<": ";
		cin >> number;
		
		if (x % 3 == 0 && untreated > treated)
		{
			doctors += 1;
		}
		if (number <= doctors)
		{
			treated += number;
		}
		else if (number > doctors)
		{
			untreated += number - doctors;
			treated += doctors;
		}
		
	}
	
	cout <<"Treated Patients: "<< treated << endl;
	cout <<"Untreated Patients: "<< untreated;

    
}
