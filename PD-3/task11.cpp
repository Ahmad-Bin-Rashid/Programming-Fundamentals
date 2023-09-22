#include <iostream>
using namespace std;
main()
{
	int age;
	int moved;
	int average;
	cout <<"Enter the person's age: ";
	cin >> age;
	cout <<"Enter the number of times they've moved: ";
	cin >> moved;
	average = age / (moved + 1);
	cout <<"Average number of years lived in the same house: "<<average;
}