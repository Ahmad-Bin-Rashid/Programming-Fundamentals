/*
 Program that takes measurements as input from user
and calculates the height of the tree using trigonometric principles. 
*/


# include <iostream>
# include <cmath>
using namespace std;

float calculateTreeHeight (float distance, float angle);        //function prototype
main()
{
	float distance;
	float angle;
	float height;

	cout <<"Enter the distance from the base of the tree (in feet): ";
	cin >> distance;
	cout <<"Enter the angle of elevation (in degrees): ";
	cin >> angle;

	height = calculateTreeHeight (distance, angle);           //function call 
	cout <<"The height of the tree is: "<< height <<" feet";
}

float calculateTreeHeight (float distance, float angle)

/*
 Function that calculate the height of tree and returns the value
 calculated.
*/



{
	float height = distance * tan (angle / 57.2958);
	return height;
}