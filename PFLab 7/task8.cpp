/*
 Program that finds the money Lilly has saved and if it is enough to
 buy a washing machine.
*/

#include <iostream>
using namespace std;

string calculateMoney (int age, int wmprice, int toy);              //function prototype

main()
{
	int age;
	int wmprice;
	int toy;
	string result;
	
	cout <<"Enter Lilly's age: ";
	cin >> age;
	cout <<"Enter the price of the washing machine: ";
	cin >> wmprice;
	cout <<"Enter the unit price of each toy: ";
	cin >> toy;
		
	result = calculateMoney (age, wmprice, toy);                  //function call
	cout << result ;
}

string calculateMoney (int age, int wmprice, int toy)

/*
 Function that takes Lilly's age, washing machine price and unit 
 price of toy and returns if it is enough to buy a washing machine.
*/

{
	int even = 0;
	int money = 0;
	int odd = 0;
	int toyprice = 0;
	int total = 0;
	int amount = 0;
	string result;
	
	for (int x = 1; x < age; x += 2)
	{
		odd += 1;
	}
	
	toyprice = toy * odd;
	
	for (int y = 2; y <= age; y += 2)
	{
		money = money + 10;
		even = even + money;
		even -= 1;
	}
	
	total = toyprice + even;
	
	if (total >= wmprice)
	{
		amount = total - wmprice;
		result = "Yes!\n"+ to_string(amount);
	}
	
	else if (total < wmprice)
	{
		amount = wmprice - total;
		result = "No!\n"+ to_string(amount);
	}
	
	return result;
}

