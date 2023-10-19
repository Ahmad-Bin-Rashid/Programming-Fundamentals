/*
 Program that finds the sum of the digits of the number entered
 by user.
*/

#include <iostream>
using namespace std;

int digitSum(int num);                                      //function prototype

main()
{
    int num;

    cout <<"Enter a number: ";
    cin >> num;

    cout << "Sum of digits: "<< digitSum (num);              //function call
}

int digitSum (int num)

/*
 Function that takes the number from the user and prints the 
 sum of its digits on the screen.
*/

{
    int total = 0;
    int sum = 0;

    for (int x = num;  x > 0; x = x / 10)
    {
        sum = num % 10;
        total = total + sum;
        num = num / 10;
    }    
    return total;
}
