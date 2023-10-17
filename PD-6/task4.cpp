/*
 Program that calculates and prints the bill for a cellular company.
*/

#include <iostream>
using namespace std;

string serviceType (char type);                                  //functions prototypes
float dueAmount (char type, char time, int mins);

main()
{
    char type;
    char time = ' ';
    int mins;
    string service;
    float amount;


    cout <<"Enter the service code (R/r for regular, P/p for premium): ";
    cin >> type;
    if (type == 'P' || type == 'p')
    {
    cout <<"Enter time of the call (D/d for day, N/n for night): ";
    cin >> time;
    }
    cout <<"Enter the number of minutes used: ";
    cin >> mins;

    service = serviceType (type);                                 //functions call
    amount = dueAmount (type, time, mins);
    cout <<"Service Type: " << service << endl;
    cout <<"Total Minutes Used: " << mins <<" minutes" << endl;
    cout <<"Amount Due: $" << amount;
}

string serviceType (char type)

/*
 Function that takes character as input and return full form of type
 chosen.
*/

{
    string sertype;

    if (type == 'P' || type == 'p')
    {
        sertype = "Premium";
    }
    if (type == 'R' || type == 'r')
    {
        sertype = "Regular";
    }
    return sertype;
}

float dueAmount (char type, char time, int mins)

/*
 Function that takes type, day time and minutes as input and returns
 the amount after calculation according to type and time.
*/

{
    float amount;
    float min;
    if (type == 'R' || type == 'r')
    {
        amount = 10.00;
        if (mins > 50)
        {
            min = mins - 50;
            amount =amount + (min * 0.20); 
        }
    }
    if (type == 'P' || type == 'p')
    {
        amount = 25.00;
        if ((time == 'D' || time == 'd') && mins > 75)
        {
            min = mins - 75;
            amount = amount + (min * 0.10);
        }
        if ((time == 'N' || time == 'n') && mins > 100)
        {
            min = mins - 100;
            amount = amount + (min * 0.05);
        }
    }
    return amount;
}
