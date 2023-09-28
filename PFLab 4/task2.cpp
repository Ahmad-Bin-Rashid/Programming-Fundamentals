/*
 Program that take inches as input and displays 
 equivalent value in feet.
*/


#include <iostream>
using namespace std;

void convert(float inch);         //Funtion Prototype

main()
{
	float inch;
	cout <<"Enter the measurement in inches: ";
	cin >> inch;
	convert (inch);           //Function Call
}



void convert(float inch)          //Function that converts inches into feet
{                                 //converting inches into feet 
	float feet = inch / 12; 
	cout <<"Equivalent in feet: "<< feet;
}