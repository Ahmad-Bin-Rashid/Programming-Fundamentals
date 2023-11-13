/*
 Program that converts a customer's PIN number to its dance equivalent. There is one
 dance move per digit in the PIN number.
*/

#include <iostream>
using namespace std;

void convertPin (string pin);                                   //functions prototype
bool checkValidity (string pin);

main()
{
	string pin;
	
	cout <<"Enter your PIN (4 digits): ";
	cin >> pin;
	
	
	if (pin.length() != 4 or checkValidity(pin) == false)
	{
		cout <<"Invalid input."<< endl;
	}
	else
	{
		convertPin (pin);                               //function call
	}
}

void convertPin (string pin)

/*
 Function that converts entered PIN to its equivalent dance moves.
*/

{
	string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
	int index;
	
	for (int x = 0; x < pin.length(); x++)
	{
		int digit = pin[x] - '0';
		index = digit + x;
		index %= 10;
		cout << moves[index];
		if (x < pin.length() - 1)
		{
			cout <<", ";
		}
	}
	cout << endl;
}

bool checkValidity (string pin)

/*
 Function that check whether the PIN entered by user consists of 
 integer digits or not.
*/

{
	bool result = true;
	for (int i = 0; i < pin.length(); i++)
	{
		int digit = pin[i];
		if (digit < 48 or digit > 57)
			result = false;
	}
	return result;
}
