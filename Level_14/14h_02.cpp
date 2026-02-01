#include <iostream>
using namespace std;

int main14002() {
	int arr[5][5];
	int n;

	cin >> n;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}

	if (n==1)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	else if (n == 2)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j <= 5-i-1; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}