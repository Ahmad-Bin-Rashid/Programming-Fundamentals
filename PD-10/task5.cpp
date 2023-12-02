/*
  Program that takes a list of  10 pakages with their respective weights 
  and sorts the pakages in ascending order of weight so that the lighter
  pakages can be loaded onto delivery trucks first.
*/


#include <iostream>
using namespace std;

main()
{
    int array[10];
    int temp;

    cout <<"Enter the weights of the 10 packages: "<< endl;
    for (int x = 0; x < 10; x++)
    {
        cin >> array[x];
    }

    for (int y = 0; y < 10; y++)
    {
        for (int z = 0; z < 9; z++)
        {
            if (array[z+1] < array[z])
            {
                temp = array[z];
                array[z] = array[z+1];
                array[z+1] = temp;
            }
        }
    }

    cout <<"Sorted array in ascending order: [";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i];
        if (i < 9)
            cout <<", ";
    }
    cout <<"]";
}


