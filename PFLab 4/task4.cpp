/*
 Program that works as a basic calculator and
 performs four operations : addition, subtraction,
 multiplication and division
*/



#include <iostream>
using namespace std;

void add(int num1, int num2);            
void sub(int num1, int num2);
void multiply(int num1, int num2);
void divide(int num1, int num2);

main()
{
	int num1;
	int num2;
	char op;
	cout <<"Enter 1st number: ";
	cin >> num1;
	cout <<"Enter 2nd number: ";
	cin >> num2;
	cout <<"Enter an operator (+, -, *, /): ";
	cin >> op;

                               //User will choose the opertion
                               //If loops on four opertions
	if (op == '+')         //It will funtion if user enters +
	{
		add (num1, num2);
	}


	if (op == '-')         //It will funtion if user enters -
	{
		sub (num1, num2);
	}


	if (op == '*')         //It will funtion if user enters *
	{
		multiply (num1, num2);
	}


	if (op == '/')         //It will funtion if user enters /
	{
		divide (num1, num2);
	}
}
                               //Functions performing four operations

void add(int num1, int num2)
{
	cout <<"Addition: "<<num1+num2;
}


void sub(int num1, int num2)
{
	cout <<"Subtraction: "<<num1-num2;
}


void multiply(int num1, int num2)
{
	cout <<"Multiplication: "<<num1*num2;
}


void divide(int num1, int num2)
{
	cout <<"Division: "<<num1/num2;
}