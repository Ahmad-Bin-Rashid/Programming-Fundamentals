/*
 Program that tells whether the three digits number has same parity
 as that of the sum of its digits.
*/


#include <iostream>
using namespace std;

bool parityAnalysis (int number);                      //Function prototype

main()
{
    int number;
    int result;

    cout <<"Enter a 3-digit number: ";
    cin >> number;

    result = parityAnalysis (number);                  //Function call
    cout << result;
}

bool parityAnalysis (int number)


/*
 Function that takes a three digit number as input and returns true if the
 sum of its digits has the same parity as the entire number otherwise returns
 false.
*/


{
    int num1;
    int num2;
    int num3;
    int sum;
    int result;

    num1 = number % 10;
    num2 = number / 10;
    num2 = num2 % 10;
    num3 = number / 100;
    sum = num1 + num2 + num3;

    if (num1 % 2 == sum % 2)
    {
        result = true;                         //returns 1
    }
    else
    {
        result = false;                        //returns 0
    }
    return result;
}