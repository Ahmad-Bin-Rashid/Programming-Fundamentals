/*
 Program that determine whether we are able to pay for the item
 or not.
*/

#include <iostream>
using namespace std;

bool payBill (double change[], double bill);               //function prototype

main()
{
    double change[4];
    double bill;
    bool result;

    cout <<"Enter quarters: ";
    cin >> change[0];
    cout <<"Enter dimes: ";
    cin >> change[1];
    cout <<"Enter nickels: ";
    cin >> change[2];
    cout <<"Enter pennies: ";
    cin >> change[3];
    cout <<"Enter the total amount due: $";
    cin >> bill;

    cout <<"Can you pay the amount? ";
    result = payBill (change, bill);                         //function call
    if (result == true)
    {
        cout <<"Yes";
    }
    else if (result == false)
    {
        cout <<"No";
    }
}

bool payBill (double change[], double bill)

/*
 Function that determine whether we are able to pay for the item
 or not based upon the amount in pocket and price of item.
*/

{
    double quarter, dime, nickel, penny, total, diff;

    quarter = change[0] * 0.25;
    dime = change[1] * 0.10;
    nickel = change[2] * 0.05;
    penny = change[3] * 0.01;
    total = quarter + dime + nickel + penny;

    diff = total - bill;
    if (diff >= 0)
    {
        return true;
    }
    else if (diff < 0)
    {
        return false;
    }
}
