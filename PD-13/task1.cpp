#include <iostream>
using namespace std;

main()
{
	int arr[13] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
	int temp;
	
	for (int i = 0; i < 13; i++)
	{
		for (int x = 1; x < 12; x++)
		{
			if (arr[x] % 2 == 1 && arr[x+1] % 2 == 0)
			{
				temp = arr[x];
				arr[x] = arr[x+1];
				arr[x+1] = temp;
			}
		}
	}
	
	cout << "[";
	for (int y = 0; y < 13; y++)
	{
		cout << arr[y];
		if (y < 12)
		{
			cout <<",";
		}
	}
	cout <<"]"<< endl;
}
