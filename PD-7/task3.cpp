/*
 Program that prints the sequence of consective numbers in which the
 numbers divisible by 4 will be amplified by 10.
*/

#include <iostream>
using namespace std;

void amplify (int count);                               //function prototype

main()
{
    int count;

    cout <<"Enter the number to Amplify: ";
    cin >> count;

    amplify (count);                                   //function call
}

void amplify (int count)

/*
 Function that prints the sequence of consective numbers upto the numbers
 entered by user in which the numbers divisible by 4 will be amplified by 10.
*/

{
    int divisible;
    for (int x = 1; x <= count; x += 1)
    {
        if (x % 4 == 0)
        {
            divisible = x * 10;
            cout << divisible ;
            if (x != count)
            {
                cout <<", ";
            }
            continue;
        }
        cout << x ;
        if (x == count)
        {
            continue;
        }
        cout << ", ";
    }
}
