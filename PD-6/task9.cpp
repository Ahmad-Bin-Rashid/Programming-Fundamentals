/*
 This Program is related to a figure and tells whether the point
 entered by the user lies inside , at borders or outside the
 figure.
*/

#include <iostream>
using namespace std;

string checkPointPosition (int height, int xcord, int ycord);            //function prototype

main()
{
    	int height;
	int xcord;
	int ycord;
	string result;

    	cout <<"Enter height: ";
    	cin >> height;
    	cout <<"Enter x coordinate: ";
    	cin >> xcord;
    	cout <<"Enter y coordinate: ";
    	cin >> ycord;

    	result = checkPointPosition (height, xcord, ycord);                //function call
	cout << result;
}

string checkPointPosition (int height, int xcord, int ycord)

/*
 Functon that takes the height of a block of figure and coordinates
 of point to be detected as an input and tells whether the point
 entered by the user lies inside , at borders or outside the
 figure.
*/

{
    	string result;
    	
    	if (height > xcord && height > ycord)
	{
		result = "Inside";
	}
	
	else if (xcord > height && xcord < height * 2 && ycord < height * 4)
	{
		result = "Inside";
	}
	
	else if (height * 2 < xcord && height * 3 > xcord && height > ycord)
	{
		result = "Inside";
	}
	
	else if ((xcord == 0 && height == ycord) || (height == xcord && height == ycord) || (height == xcord && height * 8 == ycord) || (height * 2 == xcord && height * 8 == ycord) || (height * 2 == xcord && height == ycord) || (height * 3 == xcord && height == ycord) || (height * 3 == xcord && ycord == 0))
	{
		result = "Border";
	}
	
	else
	{
		result = "Outside";
	}
	return result;
}
