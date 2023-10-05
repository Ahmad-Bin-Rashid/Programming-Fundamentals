/*
 Program that takes two numbers as input from the user and prints the
 minimum out of two on the screen
*/


# include <iostream>
# include <cmath>
using namespace std;

main()
{
	float num1;
	float num2;
	
	cout <<"Enter the first number: ";
	cin >> num1;
	cout <<"Enter the second number: ";
	cin >> num2;

	cout <<"The minimum of "<< num1 <<" and "<< num2 <<" is: "<< min (num1, num2);

}