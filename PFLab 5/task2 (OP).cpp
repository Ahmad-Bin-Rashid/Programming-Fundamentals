/*
 Program that takes two numbers from the user and takes the power of the
first number as the second number entered by the user.
*/


# include <iostream>
# include <cmath>
using namespace std;

main()
{
	float num1;
	float num2;
	
	cout <<"Enter the base number: ";
	cin >> num1;
	cout <<"Enter the exponent: ";
	cin >> num2;

	cout << num1 <<" raised to the power "<< num2 <<" is: "<< pow (num1, num2);

}