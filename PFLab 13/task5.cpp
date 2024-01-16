#include <iostream>
#include <fstream>
using namespace std;

void getStudentDetails (string names[], int adNumbers[], float percentages[], int &count, string fileName);
void saveToFile (string names[], int adNumbers[], float percentages[], int count, string fileName);

main()
{
	string names[10];
	int adNumbers[10];
	float percentages[10];
	int count = 0;
	getStudentDetails (names, adNumbers, percentages, count, "task5.txt");
	saveToFile (names, adNumbers, percentages, count, "topperStudents.txt");
}


void getStudentDetails (string names[], int adNumbers[], float percentages[], int &count, string fileName)
{
	fstream file;
	file.open(fileName, ios::in);
	while (!file.eof())
	{
		file >> names[count];
		cout << names[count] << endl;
		file >> adNumbers[count];
		cout << adNumbers[count] << endl;
		file >> percentages[count];
		cout << percentages[count] << endl;
		count++;
	}
}


void saveToFile (string names[], int adNumbers[], float percentages[], int count, string fileName)
{
	fstream file;
	file.open(fileName, ios::out);
	for (int x = 0; x < count; x++)
	{
		if (percentages[x] >= 70)
		{
			file <<"Name: "<< names[x] << endl;
			file <<"Admission Number: "<< adNumbers[x] << endl;
			file <<"Percentage: "<< percentages[x] << endl << endl;
			
		}
	}
	file.close();
}


