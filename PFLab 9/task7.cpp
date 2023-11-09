/*
 Program that takes an array of values of resistances that are connected in series
 and calculates the total resistance of the circuit in ohms.
*/

#include <iostream>
using namespace std;

void totalResistance(double array[], int num);                            //function prototype

main()
{
    int num;

    cout << "Enter the number of resistors in the series circuit: ";
    cin >> num;

    double array[num];

    if (num <= 0)
        cout <<"Invalid input. Number of resistors must be greater than 0."<< endl;

    else
    {
        cout <<"Enter the resistance values (in ohms) of the "<< num <<" resistors, one per line: "<< endl;
        for (int x = 0; x < num; x++)
        {
            cin >> array[x];
        }
    }

    totalResistance(array, num);                                    //function call
}

void totalResistance(double array[], int num)

/*
 Function that takes an array of resistances and calculates the 
 total resistance of circuit in ohms.
*/

{
    	cout <<"The total resistance of the series circuit is ";
    	double ohm = 0;
    	for (int y = 0; y < num; y++)
    	{
		ohm += array[y];
    	}
    	cout << ohm <<" ohms.";
}
