#include <iostream>
using namespace std;
main()
{
	string name;
	float matric;
	float inter;
	float ecat;
	float agg;
	cout <<"Enter the student's name: ";
	cin >> name;
	cout <<"Enter matriculation marks (out of 1100): ";
	cin >> matric;
	cout <<"Enter intermediate marks (out of 550): ";
	cin >> inter;
	cout <<"Enter Ecat marks (out of 400): ";
	cin >> ecat;
	agg = ((matric / 1100) * 10) + ((inter / 550) * 40) + ((ecat / 400) * 50);
	cout <<"Aggregate score for "<<name<<" in UET is: "<<agg<<"%";
}