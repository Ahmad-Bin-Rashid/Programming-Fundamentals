/*
 Program that prints sidha pajaama using astericks in nested loop.
*/

#include <iostream>
using namespace std;

void printAsterisks (int count);                   //function prototype

main()
{
    int count;

    cout <<"Enter desired number of rows: ";
    cin >> count;

	cout << endl;
    printAsterisks (count);                         //function call
}

void printAsterisks (int count)

/*
 Function that prints sidha pajaama using astericks and spaces in nested loop.
*/

{
    for (int x = 0; x <= count; x += 1)
    {
        for (int y = count - x; y > 0; y -= 1)
        {
            cout << "*";
        }
        for (int z = (count - x) + 1; z > (count - x) && z <= count; z += 1)
        {
            cout << " ";
        }
      
        for (int j = 1; j <= x; j += 1)
        {
            cout << " ";
        }
        for (int k = x ; k >= x && k <= count; k += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}
