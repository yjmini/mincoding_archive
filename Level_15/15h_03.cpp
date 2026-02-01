#include <iostream>
using namespace std;

int main15003() {
	int arr[3][4];
	int k = 12;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = k;
			k--;
		}
	}

	int n;
	cin >> n;

	if (n == 1)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[0][i] = 7;
		}
	}
	else if (n == 2)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[1][i] = 7;
		}
	}
	else if (n == 3)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[2][i] = 7;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}