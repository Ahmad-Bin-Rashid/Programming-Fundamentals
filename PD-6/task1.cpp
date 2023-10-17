/*
 Program to print appropiate activity depending on the variable
 temperature and humidity value.
*/

#include <iostream>
using namespace std;

string decideActivity (string, string);                      //function prototype

main()
{
    string temp;
    string humidity;
    string result;

    cout <<"Enter temperature (warm or cold): ";
    cin >> temp;
    cout <<"Enter humidity (dry or humid): ";
    cin >> humidity;

    result = decideActivity(temp, humidity);                 //function call
    cout <<"Recommended activity: " << result;
}

string decideActivity (string temp, string humid)

/*
 Function that takes temperature and humidity as input and
 returns the appropiate activity according to the condition.
*/

{
    string result;

    if (temp == "warm" && humid == "dry")
    {
        result = "Play tennis";
    }
    if (temp == "warm" && humid == "humid")
    {
        result = "Swim";
    }
    if (temp == "cold" && humid == "dry")
    {
        result = "Play basketball";
    }
    if (temp == "cold" && humid == "humid")
    {
        result = "Watch TV";
    }
    return result;
}
