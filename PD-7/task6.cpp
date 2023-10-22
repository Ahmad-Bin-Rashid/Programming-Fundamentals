/*
 Program that prints the Primorial of first prime number upto the
 number entered by user.
*/

#include <iostream>
using namespace std;

int primorial (int number);                 //function prototype

main()
{
    	int number;
    	int result;

    	cout <<"Enter Number: ";
    	cin >> number;

    	result = primorial (number);         //function call
    	cout << result;
}

int primorial (int number)

/*
 Function that returns the primorial of a number.
*/

{
    	int prime = 1;
    	int modulus = 0;
    	int product = 1;

    	for (int x = 2; prime <= number ; x += 1)
    	{
      	for (int y = 2; y <= x; y++)
      	{
      		if (x % y == 0)
      		{
      			modulus += 1;
			}
		}
		if (modulus == 1)
		{
			product *= x;
			prime += 1;
			modulus = 0;
		}
		modulus = 0;
    	}
    	
    	return product;
}
