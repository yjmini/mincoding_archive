#include <iostream>
using namespace std;

int arr[6] = { 3,7,4,1,2,6 };
int univer[2][2];

int isExist(int i, int j)
{
	for (int k = 0; k < 6; k++)
	{
		if (univer[i][j] == arr[k])
		{
			return 1;
		}

	}
	return 0;
}

int main17002() {

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> univer[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (isExist(i, j) == 1)
			{
				cout << "OK ";
			}
			else if (isExist(i, j) == 0)
			{
				cout << "NO ";
			}
		}
		cout << endl;
	}


	return 0;
}