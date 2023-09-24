#include <iostream>
using namespace std;

main()
{
	int pop;
	int rate;
	int after;
	cout <<"Enter the current world population: ";
	cin >> pop;
	cout <<"Enter the monthly birth rate (number of births per month): ";
	cin >> rate;
	after = pop + rate * 12 * 30;
	cout <<"The population in three decades will be: "<<after;
}