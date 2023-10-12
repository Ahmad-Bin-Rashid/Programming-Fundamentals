/*
 Program that prints the personal title depending upon the
 age entered.
*/


#include <iostream>
using namespace std;

string checkTitle (char gender, int age);                   //function prototype

main()
{
    int age;
    char gender;
    string result;

    cout <<"Enter your age: ";
    cin >> age;
    cout <<"Enter your gender (m/f): ";
    cin >> gender;

    result = checkTitle (gender, age);                     //funtion call
    cout <<"Your personal title is: "<< result;
}

string checkTitle (char gender, int age)

/*
 Function that takes age and gender and returns the personal title
 depending on the age.
*/

{
    string result;
    if (gender == 'm' && age >= 16)                //if gender is male and age is above 16
    {
        result = "Mr.";
    }
    if (gender == 'm' && age < 16)                //if gender is male and age is below 16
    {
        result = "Master";
    }
    if (gender == 'f' && age >= 16)               //if gender is female and age is above 16
    {
        result = "Ms.";
    }
    if (gender == 'f' && age < 16)                //if gender is female and age is below 16
    {
        result = "Miss";
    }
    
    return result;
}