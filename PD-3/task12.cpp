#include <iostream>
using namespace std;
main()
{
	int sqmeter;
	int width;
	int height;
	int walls;
	cout <<"Number of square meters you can paint: ";
	cin >> sqmeter;
	cout <<"Width of the single wall (in meters): ";
	cin >> width;
	cout <<"Height of the single wall (in meters): ";
	cin >> height;
	walls = sqmeter / (width * height);
	cout <<"Number of walls you can paint: "<<walls;
}