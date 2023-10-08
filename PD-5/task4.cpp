/*
 Program that calculates whether the firm can finish the project on time
 and how many hours more are needed or left.
*/

# include <iostream>
using namespace std;

string projectTimeCalculation (int hours, int days, int workers);     //Function Prototype

main()
{
    int hours;
    int days;
    int workers;
    string result;

    cout <<"Enter the needed hours: ";
    cin >> hours;
    cout <<"Enter the days that firm has: ";
    cin >> days;
    cout <<"Enter the number of all workers: ";
    cin >> workers;

    result = projectTimeCalculation (hours, days, workers);           //Function Call
    cout << result;
}

string projectTimeCalculation (int hours, int days, int workers)

/*
 Function that takes needed hours, days that the firm has and number of 
 workers as input and then returns the string as answer.
*/

{
    string result;
    int calculation = (days * 9 * workers);

    if (hours > calculation)                                  //if the time is not enough
    {
        calculation = hours - calculation;
        result = "Not enough time! "+ to_string(calculation) +" hours needed.";
        return result;
    }
    if (hours <= calculation)                                 //if the time is enough
    {
        calculation = calculation - hours;
        result = "Yes!"+ to_string(calculation) +" hours left.";
        return result;
    }
}
