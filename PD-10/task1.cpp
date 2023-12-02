/*
  Program that takes in an array of miles run every Saturday and trakes how often
  the number of miles the person runs this Saturday, exceeds the number of miles run
  the previous day. This is called the progress day. The objective is to calculate
  the number of progress days.
*/

#include <iostream>
using namespace std;

int calculateProgressDay (int array[], int size);               //function prototype

main()
{
    int size;

    cout <<"Enter the number of Saturdays: ";
    cin >> size;

    int array[size];

    for (int x = 0; x < size; x++)
    {
        cout <<"Enter miles run for Saturday "<< x + 1 <<": ";
        cin >> array[x];
    }

    cout <<"Total progress days: "<< calculateProgressDay(array, size);
}

int calculateProgressDay (int array[], int size)

/*
  Function that calculates the number of progress days
*/

{
    int progress = 0;
    for (int y = 1; y < size; y++)
    {
        if (array[y] > array[y - 1])
            progress++;
    }
    return progress;
}
