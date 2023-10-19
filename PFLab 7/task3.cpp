/*
 Program that tells the number of digits of the number entered 
 by the user.
*/

#include <iostream>
using namespace std;

int totalDigits (int num);                                       //function prototype

main()
{
    int num;

    cout <<"Enter a number: ";
    cin >> num;

    cout << "Total number of digits: "<< totalDigits (num);      //function call
}

int totalDigits (int num)

/*
 Function that takes number as input and returns the total number of
 digits in that number entered by user.
*/

{
    int total = 0;
    if (num == 0)
    {
        total = 1;
    }

    if (num != 0)
    {
        for (int x = num;  x != 0; x = x / 10)
        {
            total = total + 1;
        }
    }    
    return total;
}
