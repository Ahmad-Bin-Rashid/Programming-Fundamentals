/*
 Program that calculate the primeter of the shape chosen
 by the user.
*/


#include <iostream>
using namespace std;

float perimeter (char letter, float number);                //Function Prototype

main()
{
    float number;
    char letter;
    float result;

    cout <<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> letter;
    cout <<"Enter the value: ";
    cin >> number;

    result = perimeter (letter, number);                         //function call
    cout <<"The perimeter is: "<< result;
}

float perimeter (char letter, float number)

/*
 Function that takes a number as input and returns the perimeter of
 the shapes : Square, Circle, Equilateral Triangle, Regular Hexagon
 as directed by user.
*/

{
    float result;

    if (letter == 's')                          //if calculating perimeter of square
    {
        result = 4 * number;
    }
    if (letter == 'c')                          //if calculating perimeter circle
    {
        result = 6.28 * number;
    }
    if (letter == 't')                          //if calculating perimeter of triangle
    {
        result = 3 * number;
    }
    if (letter == 'h')                          //if calculating perimeter of hexagon
    {
        result = 6 * number;
    }
    
    return result;
}