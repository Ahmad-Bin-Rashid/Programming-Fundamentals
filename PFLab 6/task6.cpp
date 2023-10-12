/*
 Program that calculates 10% discount on total purchase for every Sunday
 or month of October.
*/


#include <iostream>
using namespace std;

float discount (string day, string month, float amount);              //funtion prototype

main()
{
    string day;
    string month;
    float amount;
    float result;

    cout <<"Enter Purchase Day: ";
    cin >> day;
    cout <<"Enter Purchase Month: ";
    cin >> month;
    cout <<"Enter Purchase Amount: ";
    cin >> amount;

    result = discount ( day, month, amount);                         //funtion call
    cout <<"Payable Amount after discount: "<< result;
}

float discount (string day, string month, float amount)

/*
 Function that takes Day, Month, and total amount as input and returns
 the payable amount after the discount.
*/

{
    float payable = amount;
    if (day == "Sunday" || month == "October")
    {
        payable = amount - ((amount * 10) / 100);
    }

    return payable;
}