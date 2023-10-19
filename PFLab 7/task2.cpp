/*
 Program that prints the Fibonacci series to the length entered
 by user.
*/

#include <iostream>
using namespace std;

void generateFibonacci(int num);                          //function prototype

main()
{
    int num;

    cout <<"Enter the length of the Fibonacci series: ";
    cin >> num;

    generateFibonacci(num);                                 //function call
}

void generateFibonacci(int num)

/*
 Function that takes length as input and prints the Fibonacci series 
 to that length entered by user.
*/

{
    int num1 = 0;
    int num2 = 1;
    int sum = 0;

    if (num == 0)
    {
        false;
    }

    if (num == 1)
    {
        cout << num1;
    }

    if (num == 2)
    {
        cout << num1 <<", "<< num2;
    }

    if (num > 2)
    {
        cout << num1 <<", "<< num2;
    

        for (int x = 2; x < num; x += 1)
        {
            sum = num1 + num2;
            cout <<", "<< sum ;
            num1 = num2;
            num2 = sum;
        }
    }
}
