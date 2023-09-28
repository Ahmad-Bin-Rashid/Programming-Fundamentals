/*
 Program that determines who will be
 eligible to vote.
*/


#include <iostream>
using namespace std;

void vote(int age);        //function prototype

main()
{
	int age;
	cout <<"Enter your age: ";
	cin >> age;  
	vote (age);        //function call
}

void vote(int age)
{                          //when input age is less than 18
	if (age < 18)
	{
		cout <<"You are not eligible to vote.";
	}
                           //when input age is 18 or more
	if (age >= 18)
	{
		cout <<"You are eligible to vote.";
	}
}