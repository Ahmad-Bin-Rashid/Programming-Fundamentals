#include <iostream>
using namespace std;
main()
{
	int hours;
	int sec;
	cout <<"Enter the number of hours: ";
	cin >> hours;
	sec = 3600 * hours;
	cout <<hours<<" hours is equivalent to "<<sec<<" seconds.";
}