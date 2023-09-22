#include <iostream>
using namespace std;
main()
{
	float vegPrice;
	float frPrice;
	float vegKg;
	float frKg;
	float rupees;
	cout <<"Enter vegetable price per kilogram (in coins): ";
	cin >> vegPrice;
	cout <<"Enter fruit price per kilogram (in coins): ";
	cin >> frPrice;
	cout <<"Enter total kilograms of vegetables: ";
	cin >> vegKg;
	cout <<"Enter total kilograms of fruits: ";
	cin >> frKg;
	rupees = ((vegPrice * vegKg) / 1.94) + ((frPrice * frKg) / 1.94);
	cout <<"Total earnings in Rupees (Rps): "<<rupees;
}