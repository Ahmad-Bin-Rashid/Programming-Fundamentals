/*
 Program that inputs three numbers from the user and prints the
 greater number.
*/


#include <iostream>
using namespace std;

int findGreatest (int num1, int num2, int num3);               //funtion prototype

main()
{
    int num1;
    int num2;
    int num3;
    int result;

    cout <<"Enter the first number: ";
    cin >> num1;
    cout <<"Enter the second number: ";
    cin >> num2;
    cout <<"Enter the third number: ";
    cin >> num3;

    result = findGreatest (num1 , num2, num3);
    cout <<"The greatest number among "<< num1 <<", "<< num2 <<", and "<< num3 <<" is: "<< result;
}

int findGreatest (int num1, int num2, int num3)

/*
 Function that takes 3 numbers as input and returns the greatest 
 number of all.
*/

{
    
    if (num1 > num2 && num1 > num3)                //if first number is greatest
    {
        return num1;
    }
    if (num2 > num1 && num2 > num3)                //if second number is greatest
    {
        return num2;
    }
    else                                           //if third number is greatest
    {
        return num3;
    }
}