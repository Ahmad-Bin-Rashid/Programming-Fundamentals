/*
 Program to make Player patrol(continuously move up and down) vertically
 inside the maze.
*/

#include<iostream>
#include<windows.h>
using namespace std;


void Gotoxy(int x, int y);	                           //function prototype



void Printmaze();        	                           //it will print a maze
void Moveplayer(int x, int y);                        // it will print at specific point


main() 
{
	int x = 7;
	int y = 2;
	system("cls");
	Printmaze();
	while(true)
	{
		Moveplayer(x,y);
		y=y+1;
		if(y==13)
		{
		   y=2;
		}
	}
	Moveplayer(x,y);	                    //function call
}

void Moveplayer(int x, int y)
{
	Gotoxy(x,y);
	cout<<"P";
	Sleep(100);
	Gotoxy(x,y);
	cout<<" ";
}

void Gotoxy(int x, int y)

/* 
 A Function that  moves the cursor position to the
 given XY location on the screen.
*/

{
	COORD cordinates;
	cordinates.X=x;
	cordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cordinates);
}

void Printmaze()
{
	cout<<"#####################################################################"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#                                                                   #"<<endl;
	cout<<"#####################################################################"<<endl;
}
