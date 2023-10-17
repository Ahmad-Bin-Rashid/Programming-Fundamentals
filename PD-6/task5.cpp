/*
 Program that calculates the price of fruits according to the
 day of the week.
*/

#include <iostream>
using namespace std;

float calculateFruitPrice (string fruit, string day, double quantity);            //function prototype

main()
{
    string fruit;
	string day;
	double quantity;
	float result;

    cout <<"Enter the fruit name: ";
    cin >> fruit;
    cout <<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> day;
    cout <<"Enter the quantity: ";
    cin >> quantity;

    result = calculateFruitPrice (fruit, day, quantity);                    //function call
    if (result == -1)
    {
    	cout <<"error";
	}
	else
	{
    cout << result;
	}
}

float calculateFruitPrice (string fruit, string day, double quantity)

/*
 Functon that takes the type of fruit, day of the week and quantity of 
 the fruits and calculates the total price.
*/

{
    float result = -1;

    if (fruit == "banana" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
    {
        result = quantity * 2.50;
    }
    else if (fruit == "apple" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
    {
        result = quantity * 1.20;
    }
    else if (fruit == "orange" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
    {
        result = quantity * 0.85;
    }
    else if (fruit == "grapefruit" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
    {
        result = quantity * 1.45;
    }
    else if (fruit == "kiwi" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
    {
        result = quantity * 2.70;
    }
    else if (fruit == "pineapple" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
    {
        result = quantity * 5.50;
    }
    else if (fruit == "grapes" && (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"))
    {
        result = quantity * 3.85;
    }
    
    
    
    else if (fruit == "banana" && (day == "Saturday" || day == "Sunday"))
    {
        result = quantity * 2.70;
    }
    else if (fruit == "apple" && (day == "Saturday" || day == "Sunday"))
    {
        result = quantity * 1.25;
    }
    else if (fruit == "orange" && (day == "Saturday" || day == "Sunday"))
    {
        result = quantity * 0.90;
    }
    else if (fruit == "grapefruit" && (day == "Saturday" || day == "Sunday"))
    {
        result = quantity * 1.60;
    }
    else if (fruit == "kiwi" && (day == "Saturday" || day == "Sunday"))
    {
        result = quantity * 3.00;
    }
    else if (fruit == "pineapple" && (day == "Saturday" || day == "Sunday"))
    {
        result = quantity * 5.60;
    }
    else if (fruit == "grapes" && (day == "Saturday" || day == "Sunday"))
    {
        result = quantity * 4.20;
    }
    return result;
}
