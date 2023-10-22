/*
 Program that prints triangle using astericks in nested loop.
*/

#include <iostream>
using namespace std;

void printAsterisks (int count);                       //function prototype

main()
{
    int count;

    cout <<"Enter desired number of rows: ";
    cin >> count;

    printAsterisks (count);                           //function call
}

void printAsterisks (int count)

/*
 Function that prints triangle using astericks in nested loop.
*/

{

    for (int x = 0; x < count; x += 1)
    {
        for (int y = count - x; y > 0; y -= 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}
