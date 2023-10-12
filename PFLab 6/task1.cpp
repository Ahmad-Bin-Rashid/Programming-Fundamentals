/*
 Program that tells whether the first number is greater than
 the second number or not.
*/


#include <iostream>
using namespace std;

bool greaterNumber (int num1, int num2);           //Function prototype

main()
{
    int num1;
    int num2;
    int result;

    cout <<"Enter the first number: ";
    cin >> num1;
    cout <<"Enter the second number: ";
    cin >> num2;

    result = greaterNumber (num1 , num2);          //Function call
    cout << result;
}

bool greaterNumber (int num1, int num2)

/*
 Function that takes 2 integer number as input and returns true if the
 first number is greater than the second number otherwise it returns
 false.
*/

{
    int result;
    if (num1 > num2)
    {
        result = true;                     //Returns 1 if this condition holds
    }
    else
    {
        result = false;                    //Returns 0 if this condition holds
    }
    return result;
}


