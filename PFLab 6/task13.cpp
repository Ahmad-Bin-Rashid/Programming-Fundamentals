/*
 Program that calculates the price for cheepest transport depending
 upon the user's travelling kilometers and period of day.
*/


#include <iostream>
using namespace std;

float lowestPrice(int kmeters, string period);                          //funtion prototype

main()
{
    int kmeters;
    string period;
    float result;

    cout <<"Enter the number of kilometers: ";
    cin >> kmeters;
    cout <<"Enter the period of the day (day/night): ";
    cin >> period;
                                                                        //function call
    result = lowestPrice (kmeters , period);
    cout <<"Lowest price for "<< kmeters <<" kilometers: "<< result <<" EUR";
}

float lowestPrice(int kmeters, string period)

/*
 Function that takes kilometers and period of the day and returns
 the price for the cheepest transport.
*/

{
    float price;

    if (kmeters < 20)                                    //transport using taxi
    {
    	if (period == "day")
    	{
    		price = kmeters * 0.79;
	}
	if (period == "night" )
	{
		price = kmeters * 0.90;
	}
        price = price + 0.70;
    }
    if (kmeters >= 20 && kmeters < 100)                 //transport using bus
    {
        price = kmeters * 0.09;
    }
    if (kmeters >= 100)                                 //transport using train
    {
        price = kmeters * 0.06;
    }
    return price;
}
