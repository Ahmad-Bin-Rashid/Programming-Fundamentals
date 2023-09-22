#include <iostream>
using namespace std;
main()
{
	int min;
	int frames;
	int total;
	cout <<"Number of Minutes: ";
	cin >> min;
	cout <<"Frames per Second: ";
	cin >> frames;
	total = min * 60 * frames;
	cout <<"Total Number of Frames: "<<total;
}