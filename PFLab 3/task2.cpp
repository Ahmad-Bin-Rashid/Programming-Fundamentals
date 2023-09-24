#include <iostream>
using namespace std;
main()
{
	float kg;
	float lb;
	cout <<"Enter weight in pounds: ";
	cin >> lb;
	kg = 0.45 * lb;
	cout <<lb<<" pounds is equal to "<<kg<<" kilograms.";
}