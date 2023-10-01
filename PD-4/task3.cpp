/*
 Progarm that takes the country's name, the ticket price
 and then displays the final price of the ticket after the
 discount according to respective country.
*/


#include <iostream>
using namespace std;

void airlineCompany (string country, float price);       //Funtion prototype
 
main ()
{
	string country;
	float price;


	cout <<"Enter the country's name: ";
	cin >> country;
	cout <<"Enter the ticket price in dollars: $";
	cin >> price;


	airlineCompany (country, price);              //Function call
}


void airlineCompany (string country, float price)


/*
 Function that calculate the discount in ticket price offered
 by company to the respective country.
*/

	
{                                      //Pakistan is offered 5% discount
	if (country == "Pakistan")
	{
		cout <<"Final ticket price after discount: $"<< price - ((price / 100) * 5);
	}


                                      //Ireland is offered 10% discount
	if (country == "Ireland")
	{
		cout <<"Final ticket price after discount: $"<< price - ((price / 100) * 10);
	}

                                      //India is offered 20% discount
	if (country == "India")
	{
		cout <<"Final ticket price after discount: $"<< price - ((price / 100) * 20);
	}

                                      //England is offered 30% discount
	if (country == "England")
	{
		cout <<"Final ticket price after discount: $"<< price - ((price / 100) * 30);
	}

                                      //Canada is offered 45% discount
	if (country == "Canada")
	{
		cout <<"Final ticket price after discount: $"<< price - ((price / 100) * 45);
	}
}



















