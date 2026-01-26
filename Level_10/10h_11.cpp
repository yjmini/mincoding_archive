#include <iostream>
using namespace std;

int main10011() {
	int arr[3][3];
	int n;
	cin >> n;
	int init = 1;

	if (n < 10) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = init;
				init++;
			}
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 2; j >=0; j--)
			{
				arr[i][j] = init;
				init++;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}