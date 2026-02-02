#include <iostream>
using namespace std;


int main17010() {
	int arr[3][3] = {
		3, 1, 9,
		7, 2, 1,
		1, 0, 8
	};
	int mask[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> mask[i][j];
			arr[i][j] = arr[i][j] * mask[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] >= 3 && arr[i][j] <= 5)
			{
				cout << "발견";
				return 0;
			}
		}
	}

	cout << "미발견";

	return 0;
}