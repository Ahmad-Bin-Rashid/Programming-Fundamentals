/*
 Program that calculates the volume of pyramid in the unit entered by
 the user.
*/

# include <iostream>
using namespace std;
                                                                           //Function Prototype
float pyramidVolume (float length, float width, float height, string unit);

main()
{

    float length;
    float width;
    float height;
    float volume;
    string unit;

    cout <<"Enter the length of the pyramid (in meters): ";
    cin >> length;
    cout <<"Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout <<"Enter the height of the pyramid (in meters): ";
    cin >> height;
    cout <<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    volume = pyramidVolume (length, width, height, unit);                         //Function call
    cout <<"The volume of the pyramid is: "+ to_string(volume) +" cubic "<< unit;

}



float pyramidVolume (float length, float width, float height, string unit)

/*
 Function that takes length, width, height and unit entered by user
 and calculates the volume of the pyramid in that unit.
*/

{
    float result;
    float volume = (length * width * height) / 3;

    if (unit == "meters")                            //if unit entered is meters
    {
        result = volume;
        return result;
    }                                             //if unit entered is kilometers
    if (unit == "kilometers")
    {
        result = volume / 1000000000;
        return result;
    }                                             //if unit entered is centimeters
    if (unit == "centimeters")
    {
        result = volume * 1000000;
        return result;
    }                                             //if unit entere is millimeters
    if (unit == "millimeters")
    {
        result = volume * 1000000000;
        return result;
    }
}
