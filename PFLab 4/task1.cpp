/*
 Program that takes distance as input and calculate 
 amount of fuel needed by a vehicle that needs 10 times
 the amount of fuel than the distance it travels.
*/


#include <iostream>
using namespace std;

void fuel(float dist);           //Function Prototype

main()
{
	float distance;
	cout <<"Enter the distance: ";
	cin >> distance;
	fuel (distance);         //Function call
}

void fuel(float dist)            //Function Definition
{                                //Function for fuel calculation
	int fuelAmount;
	fuelAmount = dist * 10;
	cout <<"Fuel needed: "<< fuelAmount;
}