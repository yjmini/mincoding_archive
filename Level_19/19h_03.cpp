#include <iostream>
using namespace std;

int main19003() {
	int arr[4];
	int map[4][4] = { 0 };
	int n = 1;

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++)
	{
		int x = 0;
		int y = 0;
		if (arr[i] % 4 != 0)
			y = arr[i] / 4;
		else
		{
			y = arr[i] / 4 - 1;
		}
		if (arr[i] % 4 != 0)
			x = arr[i] % 4 - 1;
		else
		{
			x = arr[i] % 4 + 3;
		}



		map[y][x] = n;
		n++;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}