/*
 This is Automotive Showroom Management System.
*/

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void printHeader();
int menu1();
int menu2();
float calculateCostPerVehicle(float price, float tax);
void printVehicleData(string name, string brand, int quantity, float tax, float total);

int main()
{
	string name1 = "", name2 = "", name3 = "";
	string brand1 = "", brand2 = "", brand3 = "";
	float price1 = 0.0, price2 = 0.0, price3 = 0.0;
	int quantity1 = 0, quantity2 = 0, quantity3 = 0;
	float tax1 = 0.0, tax2 = 0.0, tax3 = 0.0;
	float total1 = 0.0, total2 = 0.0, total3 = 0.0;
	int option1;
	int option2;
	
	system ("cls");
	Sleep (500);
	printHeader();
	option1 = menu1();
	if (option1 == 1)
	{
	system ("cls");	
	while (true)
	{
		printHeader();
		Sleep (200);
		option2 = menu2();
		if (option2 == 1)                                    //First vehicle Details
		{
			cout << "Enter the Brand of 1st Vehicle: ";
			cin >> brand1;
			cout << "Enter the Name of 1st Vehicle: ";
			cin >> name1;
			cout << "Enter the Stock of 1st Vehicle: ";
			cin >> quantity1;
			cout << "Enter the Price of 1st Vehicle: ";
			cin >> price1;
			cout << "Enter the Tax Rate on 1st Vehicle (%): ";
			cin >> tax1;
		}
		if (option2 == 2)                                    //Second vehicle Details
		{
			cout << "Enter the Brand of 2nd Vehicle: ";
			cin >> brand2;
			cout << "Enter the Name of 2nd Vehicle: ";
			cin >> name2;
			cout << "Enter the Stock of 2nd Vehicle: ";
			cin >> quantity2;
			cout << "Enter the Price of 2nd Vehicle: ";
			cin >> price2;
			cout << "Enter the Tax Rate on 2nd Vehicle (%): ";
			cin >> tax2;
		}
		if (option2 == 3)                                    //Third vehicle Details
		{
			cout << "Enter the Brand of 3rd Vehicle: ";
			cin >> brand3;
			cout << "Enter the Name of 3rd Vehicle: ";
			cin >> name3;
			cout << "Enter the Stock of 3rd Vehicle: ";
			cin >> quantity3;
			cout << "Enter the Price of 3rd Vehicle: ";
			cin >> price3;
			cout << "Enter the Tax Rate on 3rd Vehicle (%): ";
			cin >> tax3;
		} 
		if (option2 == 4)                                    //Tax Calculation
		{
			total1 = calculateCostPerVehicle(price1, tax1);
			total2 = calculateCostPerVehicle(price2, tax2);
			total3 = calculateCostPerVehicle(price3, tax3);
			cout << "Tax has been successfully included in Price." << endl;
		}
		if (option2 == 5)                                    //Enlisting details of all Vehicles
		{
			cout << "All Vehicles Data" << endl;
			cout << "Name" << "\t" << "Brand" << "\t" << "Stock" << "\t" << "Tax" << "\t" <<
			"Cost Per Vehicle" << endl << endl;
			printVehicleData(name1, brand1, quantity1, tax1, total1);
			printVehicleData(name2, brand2, quantity2, tax2, total2);
			printVehicleData(name3, brand3, quantity3, tax3, total3);
			cout << endl;
		}
		if (option2 == 6)                                    //Terminating Program
		{
			return 0;
		}
	
		cout << "Press any Key to Continue: ";
		getch();
		system("cls");
	}
	}
}


float calculateCostPerVehicle(float price, float tax)

/*
 Function that takes actual price and tax and calculates the 
 price including tax.
*/


{
	float total;
	total = price + price * ((tax / 100));
	return total;
}

void printVehicleData(string name, string brand, int quantity, float tax, float total)

/*
 Function that takes different parameters and lists the details  of vehicles
  in tabular form.
*/

{
	cout << name << "\t" << brand << "\t" << quantity << "\t" << tax << "%\t" << total << endl;
}

void printHeader()

// Function that prints the header.

{
	cout << "|###############################################################################|" << endl;
	cout << "|#                                                                             #|" << endl;
	cout << "|#                   Automotive Showroom Management System                     #|" << endl;
	cout << "|#                                                                             #|" << endl;
	cout << "|###############################################################################|" << endl;
	cout << endl << endl;
}

int menu1()

/*
 Function that prints the first menu and proceeds the
 program according to Option chosen by user.
*/

{
	int option;
	cout << "Select one of the following options number..." << endl;
	cout << endl;
	cout << "You want to login as:" << endl;
	cout << endl;
	cout << " 1. a Manager" << endl;
	cout << " 2. an Employee" << endl;
	cout << " 3. a Customer" << endl;
	cout << endl;
	cout << "Your Option: ";
	cin >> option;
	return option;
}

int menu2()

/*
 Function that prints the second menu and proceeds the
 program according to Option chosen by user.
*/

{
	int option;
	cout << "Select one of the following options number..." << endl;
	cout << endl;	
	cout << "1. Add 1st Vehicle Data" << endl;
	cout << "2. Add 2nd Vehicle Data" << endl;
	cout << "3. Add 3rd Vehicle Data" << endl;
	cout << "4. Calculate Price including Tax" << endl;
	cout << "5. View All Vehicles Data" << endl;
	cout << "6. Exit" << endl;
	cout << endl;	
	cout << "Your Option: ";
	cin >> option;
	return option;
}
