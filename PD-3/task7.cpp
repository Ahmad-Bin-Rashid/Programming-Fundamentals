#include <iostream>
using namespace std;
main()
{
	string name;
	float adprice;
	float chprice;
	float adtickets;
	float chtickets;
	float charity;
	float total;
	float donation;
	float remaining;
	cout <<"Enter the movie name: ";
	cin >> name;
	cout <<"Enter the adult ticket price: $";
	cin >> adprice;
	cout <<"Enter the child ticket price: $";
	cin >> chprice;
	cout <<"Enter the number of adult tickets sold: ";
	cin >> adtickets;
	cout <<"Enter the number of child tickets sold: ";
	cin >> chtickets;
	cout <<"Enter the percentage of the amount to be donated to charity: ";
	cin >> charity;
	cout <<endl;
	cout <<"Movie: "<<name<<endl;
	total = (adprice * adtickets) + (chprice * chtickets);
	cout <<"Total amount generated from ticket sales: $"<<total<<endl;
	donation = total * charity / 100;
	cout <<"Donation to charity ("<<charity<<"%): $"<<donation<<endl;
	remaining = total - donation;
	cout <<"Remaining amount after donation: $"<<remaining;
}