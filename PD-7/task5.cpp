/*
 Program that tells whether the number entered by user is prime or 
 not.
*/

#include <iostream>
using namespace std;

bool isPrime(int number);                                //function prototype

main()
{
    int number;
    int result;

    cout <<"Enter Number: ";
    cin >> number;

    result = isPrime(number);                            //function call
    cout << result;
}

bool isPrime(int number)

/*
 Function that takes a number as input and returns whether the number 
 entered by user is prime or not.
*/

{
    int prime = 0;

    for (int x = 1; x < number; x += 1)
    {
        if (number % x == 0)
        {
            prime += 1;
        }
    }
    if (prime == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
