/*
 Program that helps determine whether a student
 passes or fail depending upon his score.
*/



#include <iostream>
using namespace std;

void result(int score);

main()
{
	int score;
	cout <<"Enter your score: ";
	cin >> score;
	result (score);          //function call
}

void result(int score)
{                          //when score is 50 or less
	if (score <= 50)
	{
		cout <<"Fail";
	}
                           //when score is more than 50
	if (score > 50)
	{
		cout <<"Pass";
	}
}