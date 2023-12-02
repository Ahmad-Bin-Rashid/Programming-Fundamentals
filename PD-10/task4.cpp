/*
  Program that takes an array of boxes and calculates the total volume of all
  the boxes combined together. A box is represented by consective 3 elements in
  the array: length, width and height.
*/


#include <iostream>
using namespace std;

int calculateBoxVolume (int array[], int size);                    //function prototype

main()
{
    int size;

    cout <<"Enter the number of boxes: ";
    cin >> size;

    size *= 3;
    int array[size];

    cout <<"Enter the dimensions of the boxes (length, width, height): "<< endl;
    for (int x = 0; x < size; x++)
    {
        cin >> array[x];
    }

    cout <<"Total volume of all boxes: "<< calculateBoxVolume(array, size);
}

int calculateBoxVolume (int array[], int size)

/*
  Function that calculates the volume of all the boxes combined together.
*/

{
    int volume;
    int total = 0;
    int count = size / 3;
    int num = 0;
    
    for (int y = 0; y < count; y++)
    {
        volume = 1;
        for (int z = 0; z < 3; z++)
        {
            volume *= array[num];
            num++;
        }
        total += volume;
    }
    return total;
}
