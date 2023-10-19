/*
 Program that prints the table of the number entered by user.
*/

#include <iostream>
using namespace std;

void printTable (int number);                         //function prototype

main()
{
    int num;

    cout <<"Enter a number: ";
    cin >> num;

    printTable (number);                             //function call
}

void printTable (int number)

/*
 Function that takes number as input and prints the table of the 
 number entered by user.
*/

{
	for (int x = 1; x <= 10; x += 1)
    {
        cout << num <<" x "<< x <<" = "<< number * x << endl;
    }
}
