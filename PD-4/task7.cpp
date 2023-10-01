/*
 Program of a flower shop that calculates the total price of flowers bought
 by customer and also calculates the discount if price is greater than $200.
*/


# include <iostream>
using namespace std;

void flowerShop (int redRose, int whiteRose, int tulip);      //Function prototype

main()
{
	int redRose;
	int whiteRose;
	int tulip;
	
	cout <<"Red Rose: ";
	cin >> redRose;
	cout <<"White Rose: ";
	cin >> whiteRose;
	cout <<"Tulips: ";
	cin >> tulip;

	flowerShop (redRose, whiteRose, tulip);              //Function call
}

void flowerShop (int redRose, int whiteRose, int tulip)

/*
 Function that calculates the total price of flowers and also the discount
 if it is greater than $200.
*/

{
	float price;
	price = (redRose * 2.00) + (whiteRose * 4.10) + (tulip * 2.50);

	cout <<"Original Price: $"<< price <<endl;


	if (price > 200)
	{
		cout <<"Price after Discount: $"<< price - ((price * 20) / 100);
	}


	if (price <= 200)
	{
		cout <<"No discount applied.";
	}
}