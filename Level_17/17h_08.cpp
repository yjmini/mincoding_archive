#include <iostream>
using namespace std;

int main17008() {
	int map[2][3] = {
		3, 55, 42,
		-5, -9, -10
	};
	int pix[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> pix[i][j];
		}
	}

	int arr[2][2] = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				for (int l = 0; l < 2; l++)
				{
					if (map[i][j] == pix[k][l])
					{
						arr[k][l] = 1;
					}
				}
			}
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (arr[i][j] == 1)
			{
				cout << "Y ";
			}
			else
			{
				cout << "N ";
			}
		}
		cout << endl;
	}

	return 0;
}