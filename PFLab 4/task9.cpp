/*
 Program that takes distance as input and calculate 
 amount of fuel needed by a vehicle that needs 10 times
 the amount of fuel than the distance it travels. But
 it must have atleast 100 fuel.
*/

#include <iostream>
using namespace std;

void calculateFuel(float dist);

main()
{
	float distance;
	cout <<"Enter the distance: ";
	cin >> distance;

	if (distance >= 10)
	{
		calculateFuel(distance);
	}
                              //for atleast 100 fuel needed
	if (distance < 10)
	{
		cout <<"Fuel needed: 100";
	}
}

void calculateFuel(float dist)
{
	int fuelAmount;
	fuelAmount = dist * 10;
	cout <<"Fuel needed: "<< fuelAmount;
}