/*
Program that prints "HASSAN" (vertically) on the 
screen.
*/

#include<iostream>
using namespace std;

void PrintH();                                  //prototype
void PrintA();	                                //prototype
void PrintS();	                                //prototype
void PrintN();	                                //prototype


main()
{
	PrintH();
	PrintA();
	PrintS();
	PrintS();
	PrintA();
	PrintN();
}

void PrintH()
{
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"#######"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<" "<<endl;
}	

void PrintA()
{
	cout<<" ####"<<endl;
	cout<<"##  ##"<<endl;
	cout<<"######"<<endl;
	cout<<"##  ##"<<endl;
	cout<<"##  ##"<<endl;
	cout<<" "<<endl;
}


void PrintS()
{
	cout<<" #####"<<endl;
	cout<<"##    #"<<endl; 
	cout<<" #####"<<endl;
	cout<<"#    ##"<<endl;
	cout<<" #####"<<endl;
	cout<<" "<<endl;
}

void PrintN()
{
	cout<<"##   ##"<<endl;
	cout<<"###  ##"<<endl;
	cout<<"#######"<<endl;
	cout<<"##  ###"<<endl;
	cout<<"##   ##"<<endl; 
	cout<<" "<<endl;
} 	





