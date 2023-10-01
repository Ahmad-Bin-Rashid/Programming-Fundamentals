/*
 For a board game, a program that takes your position and your 
 friend's position and determine whether it is possible to earn
 a bonus on any die roll or not.
*/


#include <iostream>
using namespace std;

void possibleBonus (int pos1, int pos2);      //Function prototype

main ()
{

	int position1;
	int position2;


	cout <<"Enter your position: ";
	cin >> position1;
	cout <<"Enter your friend's position: ";
	cin >> position2;


	possibleBonus (position1, position2);      //Function call
}


void possibleBonus (int pos1, int pos2)

/*
 Function that display "true" on the screen if earning
 bonus is possible and "false" if it is not possible.
*/



{
	if (pos2 <= pos1 + 6)
	{
		cout <<"true";
	}


	if (pos2 > pos1 + 6)
	{
		cout <<"false";
	}
}