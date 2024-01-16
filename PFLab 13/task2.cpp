#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countCharacters (string fileName)
{
	string line;
	char characters;
	int count = 0;
	fstream file;
	file.open(fileName, ios::in);
	while (getline(file, line))
	{
		count += line.length();
	}
	file.close();
	return count;
}

main()
{
	string fileName = "task2.txt";
	int characters = 0;
	characters = countCharacters (fileName);
	cout << "Total number of characters: "<< characters << endl;
}
