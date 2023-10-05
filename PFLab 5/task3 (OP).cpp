/*
 Program that takes a number from the user as input and print
its square root on the screen. 
*/


# include <iostream>
# include <cmath>
using namespace std;

main()
{
	float number;
	
	cout <<"Enter a number: ";
	cin >> number;

	cout <<"The square root of "<< number <<" is: "<< sqrt (number);

}