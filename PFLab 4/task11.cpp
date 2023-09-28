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
	cout <<"Enter your name: ";
	cin >> name;
                   //it will activate infinite loop
	
	while(true)
	{
		myName (name);
	}
}

void myName (string name)
{
	 cout << name;
}