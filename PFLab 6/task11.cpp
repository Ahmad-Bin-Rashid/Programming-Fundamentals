/*
 Program that prints the speed information depending upon the 
 speed entered by user.
*/


#include <iostream>
using namespace std;

string checkSpeed (float speed);                        //funtion prototype

main()
{
    float speed;
    string result;

    cout <<"Enter the speed: ";
    cin >> speed;

    result = checkSpeed (speed);                       //function call
    cout << result;
}

string checkSpeed (float speed)

/*
 Function that takes speed as input and prints the status of
 user speed.
*/

{
    string result;

    if (speed <= 10)                                  //for speed below 10
    {
        result = "slow";
    }
    if (speed > 10 && speed <= 50)                    //for speed between 10 and 50
    {
        result = "average";
    }
    if (speed > 50 && speed <= 150)                   //for speed between 50 and 150
    {
        result = "fast";
    }
    if (speed > 150 && speed <= 1000)                 //for speed between 150 and 1000
    {
        result = "ultra-fast";
    }
    if (speed > 1000)                                 //for speed above 1000
    {
        result = "extremely-fast";
    }
    return result;
}