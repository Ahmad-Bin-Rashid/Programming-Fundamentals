#include <iostream>
using namespace std;
main()
{
	int size;
	int area;
	int cost;
	int perp;
	int persf;
	cout <<"Enter the size of the fertilizer bag in pounds: ";
	cin >> size;
	cout <<"Enter the cost of the bag: $";
	cin >> cost;
	cout <<"Enter the area in square feet that can be covered by the bag: ";
	cin >> area;
	perp = cost / size;
	cout <<"Cost of fertilizer per pound: $"<<perp<<endl;
	persf = cost / area;
	cout <<"Cost of fertilizing per square foot: $"<<persf;	
}