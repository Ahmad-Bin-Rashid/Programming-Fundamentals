/*
 Program that finds the frequency of a digit in a number.
*/

#include <iostream>
using namespace std;

int frequencyChecker(int num, int digit);                            //function prototype

main()
{
    int num;
    int digit;

    cout <<"Enter a number: ";
    cin >> num;
    cout <<"Enter the digit to check: ";
    cin >> digit;

    cout << "Frequency: "<< frequencyChecker(num, digit);           //function call
}

int frequencyChecker(int num, int digit)

/*
 Function that takes the number and the digit whose frequency
 is to be check and returns the frequency of the digit.
*/

{
    int total = 0;
    int freq = 0;

    for (int x = num;  x > 0; x = x / 10)
    {
        freq = num % 10;
        if (freq == digit)
        {
            total += 1;
        }
        num = num / 10;
    }    
    return total;
}
