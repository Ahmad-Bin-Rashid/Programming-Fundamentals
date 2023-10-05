/*
 Program that finds the state of the pool the moment the worker 
 comes back. A pool with volume V fills up via two pipes. Each pipe 
 has a certain flow rate (the liters of water, flowing through a 
 pipe for an hour). A worker starts the pipes simultaneously and 
 goes out for N hours. 
*/


#include <iostream>
using namespace std;
                                                                 //function prototype
void calculatePoolState (int pool, int pipe1, int pipe2, float hours);

main()
{
	int poolVol;
	int pipe1;
	int pipe2; 
	float hours;
	string result;

	cout <<"Enter volume of the pool in liters: ";
	cin >> poolVol;
	cout <<"Enter flow rate of the first pipe per hour: ";
	cin >> pipe1;
	cout <<"Enter flow rate of the second pipe per hour: ";
	cin >> pipe2;
	cout <<"Enter hours that the worker is absent: ";
	cin >> hours;

	calculatePoolState (poolVol, pipe1, pipe2, hours);          //function call
}

void calculatePoolState (int pool, int pipe1, int pipe2, float hours)

/*
function that takes the values and calculates the volume percentage,
pipes contributions and extra litres in the case of overflow.
*/

{
	float result;
	int poolPercentage;
	int pipe1Percentage;
	int pipe2Percentage;
	float volume = (pipe1 * hours) + (pipe2 * hours);

	if (pool >= volume)
	{
		poolPercentage = (volume * 100) / pool;
		pipe1Percentage = ((pipe1 * hours) * 100) / volume;
		pipe2Percentage = ((pipe2 * hours) * 100) / volume;
		cout <<"The pool is "<<poolPercentage<<"% full. Pipe 1: "<<pipe1Percentage<<"%. Pipe 2: "<<pipe2Percentage<<"%.";
	}

	else
	{
		result = volume - pool;
		cout <<"For "<< hours <<" hours, the pool overflows with "<< result <<" liters.";
	}
}	