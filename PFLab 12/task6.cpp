/*
  Program of the game BattleShip. Ships "*" are floating in the water ".", and
  the user will enter the coordinates to fire Torpedo. Program will return "splash"
  if the coordinate contains water "." and return "BOOM" if the coordinates contains
  a ship "*".
*/


#include <iostream>
using namespace std;

string fireTarpedo (string coord, string matrix[][5]);                  //function prototype

main()
{
	string matrix[5][5] ={
	{".", ".", ".", "*", "*"},
	{".", "*", ".", ".", "."},
	{".", "*", ".", ".", "."},
	{".", "*", ".", ".", "."},
	{".", ".", "*", "*", "."}
	};
	string coord;
	
	cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
	cin >> coord;
	cout <<"Result: "<< fireTarpedo (coord, matrix) << endl;
}

string fireTarpedo (string coord, string matrix[][5])

/*
  Program that takes array of Battleship configuration and coordinates and returns "splash"
  if the coordinate contains water "." and returns "BOOM" if the coordinates contains
  a ship "*".
*/

{
	int index1, index2;
	string result, check;
	char letter1 = coord[0];
	char letter2 = coord[1];
	if (letter1 == 'A' || letter1 == 'a')
	{
		index1 = 0;
	}
	else if (letter1 == 'B' || letter1 == 'b')
	{
		index1 = 1;
	}
	else if (letter1 == 'C' || letter1 == 'c')
	{
		index1 = 2;
	}
	else if (letter1 == 'D' || letter1 == 'd')
	{
		index1 = 3;
	}
	else if (letter1 == 'E' || letter1 == 'e')
	{
		index1 = 4;
	}
	
	if (letter2 == '1')
	{
		index2 = 0;
	}
	else if (letter2 == '2')
	{
		index2 = 1;
	}
	else if (letter2 == '3')
	{
		index2 = 2;
	}
	else if (letter2 == '4')
	{
		index2 = 3;
	}
	else if (letter2 == '5')
	{
		index2 = 4;
	}
	
	check = matrix[index1][index2];
	if (check == ".")
	{
		result = "splash";
	}
	else if (check == "*")
	{
		result = "BOOM";
	}
	return result;
}


