/*
 Program that takes length side of Rubik's cube
 as input and prints the number of stickers needed.
*/



#include <iostream>
using namespace std;

void howManyStickers(int side);            //Function prototype

main()
{
	int length;
	cout <<"Enter the side length of the Rubik's Cube: ";
	cin >> length;
	howManyStickers(length);           //Function call
}


void howManyStickers(int side)             //Function definiton
{
	int stickers = (side * side) *6; 
	cout <<"Number of stickers needed: "<< stickers;
}