/*
 Program that prints triangle using astericks in nested loop.
*/

#include <iostream>
using namespace std;

void printAsterisksUpward (int count);
void printAsterisksDownward (int count);

main()
{
    int count;

    cout <<"Enter desired number of rows: ";
    cin >> count;

    printAsterisksUpward (count);
    printAsterisksDownward (count);
}

void printAsterisksUpward (int count)

/*
 Function that prints triangle using astericks and spaces in nested loop.
*/

{
    count = count / 2;
    for (int x = 0; x <= count; x += 1)
    {
        for (int y = count - x; y > 0; y -= 1)
        {
            cout << " ";
        }
        for (int z = (count - x) + 1; z > (count - x) && z <= count; z += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printAsterisksDownward (int count)

/*
 Function that prints triangle using astericks and spaces in nested loop.
*/

{
    count = count / 2;
    for (int i = 0; i < count; i += 1)
    {
        for (int j = 1; j <= i; j += 1)
        {
            cout << " ";
        }
        for (int k = i + 1; k > i && k <= count; k += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}
