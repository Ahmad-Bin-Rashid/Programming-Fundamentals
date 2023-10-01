/*
 A challan issuing program that tell if the car was speeding or not.
 If the speed is greater than 100 km/h then the car will be challenged
 otherwise, the car is following th speed limit.
*/


#include <iostream>
using namespace std;

void checkSpeed (int speed);      //Function prototype

main ()
{

	int speed;


	cout <<"Speed: ";
	cin >> speed;


	checkSpeed (speed);      //Function call
}


void checkSpeed (int speed)

/*
 Function that decides whether the car was speeding or not 
 according to its speed.
*/


{
	if (speed > 100)
	{
		cout <<"Halt... YOU WILL BE CHALLENGED!!!";
	}


	if (speed <= 100)
	{
		cout <<"Perfect! You're going good.";
	}
}