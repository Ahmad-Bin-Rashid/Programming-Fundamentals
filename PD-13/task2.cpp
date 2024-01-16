#include <iostream>
using namespace std;

main()
{
	int arr[7] = {10,90,30,40,50,60,70};
	int *point = &arr[0];
	
	cout <<"["<< *point<< ", ";
	
	for (int x = 1; x < 7; x++)
	{
		point += 1;
		cout << *point ;
		if (x < 6)
		{
			cout <<", ";
		}
	}
	cout << "]"<< endl;
}

