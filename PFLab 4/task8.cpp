/*
 Program that calculate 10% discount on total puchase
 in a store if made on Sunday, otherwise, no discount
 is applied
*/


#include <iostream>
using namespace std;

void calculatePayableAmount(string day, int num);
main()
{
	string day;
	int num;
	cout <<"Enter the day of purchase: ";
	cin >> day;
	cout <<"Enter the total purchase amount: $";
	cin >> num;
	calculatePayableAmount(day, num);
}

void calculatePayableAmount(string day, int num)

{                                     //when day is Sunday
	if (day == "Sunday")          //discount will be applied
	{
		cout <<"Payable Amount: $"<< num - ((num * 10) / 100);
	}

	else                         //when day is not Sunday
	{
		cout <<"Payable Amount: $"<< num ;
	}
}