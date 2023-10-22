/*
 Program that tells the number of dots when given its corresponding
 triangle number of the sequence.
*/

#include <iostream>
using namespace std;

int triangle (int count);                                  //function prototype

main()
{
    int count;
    int result;

    cout <<"Enter number of Triangle: ";
    cin >> count;

    result = triangle (count);                             //function call
    cout <<"Dots in the Triangle: "<< result;
}

int triangle (int count)

/*
 Function that returns the number of dots when given its corresponding
 triangle number of the sequence.
*/

{
    int dots = 0;
    int value = 0;

    for (int y = 1; y <= count; y += 1)
    {
        value = y;
        dots += value;
    }
    return dots;
}
