#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countLines (string fileName)
{
	string line;
	int count = 0;
	fstream file;
	file.open(fileName, ios::in);
	while (getline(file, line))
	{
		count++;
	}
	file.close();
	return count;
}

main()
{
	string fileName = "task1.txt";
	int lines = 0;
	lines = countLines (fileName);
	cout << "Total number of lines: "<< lines << endl;
}
