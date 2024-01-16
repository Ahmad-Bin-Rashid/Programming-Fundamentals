#include <iostream>
#include <fstream>
using namespace std;

void getStudentDetails (string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count);
void saveToFile (string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName);

main()
{
	string names[10];
	int ages[10];
	float matricMarks[10];
	float fscMarks[10];
	float ecatMarks[10];
	int size;
	int count = 0;
	string fileName = "task4.txt";
	getStudentDetails (names, ages, matricMarks, fscMarks, ecatMarks, size, count);
	saveToFile (names, ages, matricMarks, fscMarks, ecatMarks, count, fileName);
}


void getStudentDetails (string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
{
	string check = "yes";
	while (check != "No")
	{
		cout <<"Enter student's name: ";
		cin >>names[count];
		cout <<"Enter student's age: ";
		cin >> ages[count];
		cout <<"Enter student's Matric marks: ";
		cin >> matricMarks[count];
		cout <<"Enter student's Fsc marks: ";
		cin >> fscMarks[count];
		cout <<"Enter student's Ecat marks: ";
		cin >> ecatMarks[count];
		count++;
		cout <<"Enter No to Stop or Yes to Continue Enter: ";
		cin >> check;
	}
}


void saveToFile (string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName)
{
	fstream file;
	file.open(fileName, ios::out);
	for (int x = 0; x < count; x++)
	{
		file <<"Name: "<< names[x] << endl;
		file <<"Age: "<< ages[x] << endl;
		file <<"Matric Marks: "<< matricMarks[x] << endl;
		file <<"Fsc Marks: "<< fscMarks[x] << endl;
		file <<"Ecat Marks: "<< ecatMarks[x] << endl << endl;
	}
	file.close();
}


