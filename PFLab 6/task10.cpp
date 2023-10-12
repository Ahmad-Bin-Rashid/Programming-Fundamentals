/*
 Program that tells whether the 3 numbers entered by user are
 same or not.
*/


#include <iostream>
using namespace std;

bool areSameNumber (int num1, int num2, int num3);            //function prototype

main()
{
    int num1;
    int num2;
    int num3;
    int result;

    cout <<"Enter the first number: ";
    cin >> num1;
    cout <<"Enter the second number: ";
    cin >> num2;
    cout <<"Enter the third number: ";
    cin >> num3;

    result = areSameNumber (num1 , num2, num3);               //function call
    cout << result;
}

bool areSameNumber (int num1, int num2, int num3)

/*
 Function that takes 3 number as input and prints 1 if the number 
 are same otherwise prints 0.
*/

{
    
    if (num1 == num2 && num1 == num3)
    {
        return true;
    }
    else
    {
        return false;
    }
}