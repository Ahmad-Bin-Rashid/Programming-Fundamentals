#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;

int countFrequency (string fileName)
{
	char ch1;
	char characters;
	int count = 0;
	fstream file;
	file.open(fileName, ios::in);
	file >> ch1;
	while (file >> characters)
	{
		if (tolower(characters) == ch1)
			count++;
	}
	file.close();
	return count;
}

main()
{
	string fileName = "task3.txt";
	int characters = 0;
	characters = countFrequency (fileName);
	cout << "Total number of characters: "<< characters << endl;
}
