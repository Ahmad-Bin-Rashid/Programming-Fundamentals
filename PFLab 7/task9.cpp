/*
 Program that calclates if Ivan will have money to not have to work until
 a particular year.
*/

#include <iostream>
using namespace std;

string calculatePrice (int money, int year);                     //function prototype

main()
{
	int money;
	int year;
	string result;
	
	cout <<"Enter Money: ";
	cin >> money;
	cout <<"Enter Year: ";
	cin >> year;
		
	result = calculatePrice (money, year);                     //function call
	cout << result ;
}

string calculatePrice (int money, int year)

/*
 Function that takes money inherited and particular year and returns
 that if Ivan will have enough money to not haveto work until that 
 particular year.
*/

{
	int differ = 0;
	int age = 18;
	int odd = 0;
	int even = 0;
	int value = 0;
	int total = 0;
	int amount = 0;
	string result;
	
	differ = year - 1800;
	
	for (int x = 1; x <= differ; x += 2)
	{
		age = x + 18;
		value = 12000 + (50 * age);
		odd += value;
	}
	
	for (int y = 0; y <= differ; y += 2)
	{
		value = 12000;
		even += value;
	}
	
	total = odd + even;
	
	if (total > money)
	{
		amount = total - money;
		result = "He will need "+ to_string(amount) +" dollars to survive.";
	}
	
	else if (total <= money)
	{
		amount = money - total;
		result = "Yes! He will live a carefree life and will have "+ to_string(amount) +" dollars left.";
	}
	
	return result;
}

