/*
 Program that displays an Astrological sign or a Zodiac sign
 for a given date of birth.
*/

#include <iostream>
using namespace std;

string findZodiacSign(int day, string month);                       //function prototype

main()
{
    int day;
    string month;
    string result;

    cout <<"Enter the day of birth: ";
    cin >> day;
    cout <<"Enter the month of birth (e.g., January, February): ";
    cin >> month ;

    result = findZodiacSign(day, month);                             //function call
    cout <<"Zodiac Sign: " << result ;
}

string findZodiacSign(int day, string month)

/*
 Function that takes the day and month of birth as input and then
 displays the astrological sign or Zodiac sign.
*/

{
    string sign;

    if ((day >= 21 && day <= 31 && month == "March") || (day <= 19 && month == "April"))
    {
        sign = "Aries";
    }
    if ((day >= 20 && day <= 30 && month == "April") || (day <= 20 && month == "May"))
    {
        sign = "Taurus";
    }
    if ((day >= 21 && day <= 31 && month == "May") || (day <= 20 && month == "June"))
    {
        sign = "Gemini";
    }
    if ((day >= 21 && day <= 31 && month == "June") || (day <= 22 && month == "July"))
    {
        sign = "Cancer";
    }
    if ((day >= 23 && day <= 31 && month == "July") || (day <= 22 && month == "August"))
    {
        sign = "Leo";
    }
    if ((day >= 23 && day <= 31 && month == "August") || (day <= 22 && month == "September"))
    {
        sign = "Virgo";
    }
    if ((day >= 23 && day <= 31 && month == "September") || (day <= 22 && month == "October"))
    {
        sign = "Libra";
    }
    if ((day >= 23 && day <= 31 && month == "October") || (day <= 21 && month == "November"))
    {
        sign = "Scorpio";
    }
    if ((day >= 22 && day <= 31 && month == "November") || (day <= 21 && month == "December"))
    {
        sign = "Sagittarius";
    }
    if ((day >= 22 && day <= 31 && month == "December") || (day <= 19 && month == "January"))
    {
        sign = "Capricorn";
    }
    if ((day >= 20 && day <= 31 && month == "January") || (day <= 18 && month == "February"))
    {
        sign = "Aquarius";
    }
    if ((day >= 19 && day <= 29 && month == "February") || (day <= 20 && month == "March"))
    {
        sign = "Pisces";
    }
    return sign;
}
