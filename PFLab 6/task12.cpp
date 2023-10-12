/*
 Program that caculates the total income from tickets depending
 on the chairs and types of screening.
*/


#include <iostream>
using namespace std;

float totalIncome (string type, int row, int column);         //function prototype

main()
{
    string type;
    int row;
    int column;
    float result;

    cout <<"Enter the screening type (Premiere/Normal/Discount): ";
    cin >> type;
    cout <<"Enter the number of rows: ";
    cin >> row;
    cout <<"Enter the number of columns: ";
    cin >> column;

    result = totalIncome (type , row, column);                //function call
    cout << result;
}

float totalIncome (string type, int row, int column)

/*
 Function that takes type of screening, the number of chairs and
 returns the total income from tickets from a full hall.
*/

{
    float income = row * column;
    if (type == "Premiere")                           //when screening is Premiere
    {
        income = income * 12.00;
    }
    if (type == "Normal")                             //when screening is Normal
    {
        income = income * 7.50;
    }
    if (type == "Discount")                          //when screening is for children
    {
        income = income * 5.00;
    }
    return income;
}