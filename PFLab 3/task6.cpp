#include <iostream>
using namespace std;
main()
{
	float megab;
	float bits;
	cout <<"Enter the size in megabytes (MB): ";
	cin >> megab;
	bits = (1024 * 1024 * 8) * megab;
	cout <<megab<<" MB is equivalent to "<<bits<<" bits.";
}