/*
 Program that prints the string "something" joined with a space and 
 the given argument a.
*/

#include <iostream>
using namespace std;

main()
{
	string word = "something ";
	string argu;
	
	cout <<"Enter the argument 'a': ";
	getline(cin, argu);
	
	cout <<"Result: "<< word + argu;
}
