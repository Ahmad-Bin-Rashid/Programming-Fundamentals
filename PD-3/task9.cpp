#include <iostream>
using namespace std;
main()
{
	int digit;
	int dig1;
	int dig2;
	int dig3;
	int dig4;
	int sum;
	cout <<"Enter a 4-digit number: ";
	cin >> digit;
	dig1 = digit % 10;
	dig2 = (digit % 100) - dig1;
	dig3 = (digit % 1000) - dig2 - dig1;
	dig4 = (digit % 10000) - dig3 - dig2 - dig1;
	sum = (dig4 / 1000) + (dig3 / 100) + (dig2 / 10) + dig1;
	cout <<"Sum of the individual digits: "<<sum;
}