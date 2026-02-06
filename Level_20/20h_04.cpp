#include <iostream>
using namespace std;

int main20004() {
	int arr1[4][4];
	int arr2[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr1[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr2[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr1[i][j] * arr2[i][j] == 1)
			{
				cout << "걸리다";
				return 0;
			}
		}
	}
	cout << "걸리지않는다";

	return 0;
}