/*
 Program that keeps printing my name until
 closed forcefully.
*/


#include <iostream>
using namespace std;

void myName (string name);

main()
{
	string name;
	while(true)
	{
		cout <<"Enter your name: ";
		cin >> name;

		if (name == "Kaka")
		{
			while(true)
			{
				myName (name);
			}
		}
	}
}

void myName (string name)
{
	 cout << name;
}