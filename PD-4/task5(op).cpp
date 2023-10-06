/*
 Program that prints name in the center of the 
 screen.
*/

#include<iostream>
#include<windows.h>
using namespace std;


void Gotoxy(int x, int y);	              //function prototype



main()
{
	Gotoxy(45,20);
	cout<<" ####    ##  ##   ###     ###    ####    #####   "<<endl;
	Gotoxy(45,21);
	cout<<"##  ##   ##  ##   ## ## ## ##   ##  ##   ##   ## "<<endl;
	Gotoxy(45,22);
	cout<<"######   ######   ##  ###  ##   ######   ##    ##"<<endl;
	Gotoxy(45,23);
	cout<<"##  ##   ##  ##   ##       ##   ##  ##   ##   ## "<<endl;
	Gotoxy(45,24);
	cout<<"##  ##   ##  ##   ##       ##   ##  ##   #####   " <<endl;
 
	
}
void Gotoxy(int x, int y)	//function definition

/*
 A Function that  moves the cursor position to the
 given XY location on the screen
*/

{
	COORD cordinates;
	cordinates.X=x;
	cordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cordinates);
}




