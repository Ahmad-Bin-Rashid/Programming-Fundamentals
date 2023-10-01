/*
 Program that tells how many days the people living in a house can consume
 tissue paper.
*/


#include <iostream>
using namespace std;

void tpChecker (int people, int tpaper);      //Function prototype

main ()
{

	int people;
	int tissuep;


	cout <<"Number of people in the household: ";
	cin >> people;
	cout <<"Number of rolls of TP: ";
	cin >> tissuep;


	tpChecker (people, tissuep);      //Function call
}


void tpChecker (int people, int tpaper)

/*
 Function that will calculate the number of days, people in a house can 
 consume the tissue paper and if the days were less than 14 it will 
 suggest to buy more tissue paper.
*/


{
	int days = (tpaper * 500) / (people * 57);

	if (days > 14)
	{
		cout <<"Your TP will last "<< days <<" days, no need to panic!";
	}


	if (days < 15)
	{
		cout <<"Your TP will only last "<< days <<" days, buy more!";
	}
}