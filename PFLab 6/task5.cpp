/*
 Program that calculates 10% discount on total purchase for every Sunday
 of October and 5% discount for every other Sunday.
*/


#include <iostream>
using namespace std;

float discount (string day, string month, float amount);            //function prototype

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
 
    result = discount ( day, month, amount);                       //function call
    cout <<"Payable Amount after discount: "<< result;
}

float discount (string day, string month, float amount)

/*
 Function that takes Day, Month, and total amount as input and returns
 the payable amount after the discount.
*/

{
    float payable = amount;

    if (day == "Sunday" && month == "October")              //for every Sunday of October
    {
        payable = amount - ((amount * 10) / 100);
    }
    if (day == "Sunday" && month != "October")              //for every other Sunday
    {
        payable = amount - ((amount * 5) / 100);
    }
    return payable;
}