/*
 Program that finds the greatest common divisor (GCD) and 
 least common multiple (LCM) of given two numbers.
*/

#include <iostream>
using namespace std;

int calculateGCD (int num1, int num2);                         //prototypes of functions
int calculateLCM (int num1, int num2, int gcd);

main()
{
	int num1;
	int num2;
	int gcd;
	
	cout <<"Enter the first number: ";
	cin >> num1;
	cout <<"Enter the second number: ";
	cin >> num2;
	
	gcd = calculateGCD (num1, num2);                        //calling gcd function
	cout <<"GCD: "<< gcd << endl;
	cout <<"LCM: "<< calculateLCM (num1, num2, gcd);        //calling lcm function
}

int calculateGCD (int num1, int num2)

/*
 Function that calculates the GCD of numbers. GCD is the largest
 positive integer that divides both numbers without a remainder.
*/

{
	int gcd;
	for (int x = 1; x <= num1 || x <= num2; x += 1)
	{
		if (num1 % x == 0 && num2 % x == 0)
		{
			gcd = x;
		}
	}
	return gcd;
}

int calculateLCM (int num1, int num2, int gcd)

/*
 Function that takes the numbers and GCD and calculates LCM. LCM is
 the smallest integer that is a multiple of both numbers.
*/

{
	int lcm;
	lcm = (num1 * num2) / gcd;
	return lcm; 
}
