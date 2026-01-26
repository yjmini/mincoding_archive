#include <iostream>
using namespace std;


int main1005() {
	int arr[3][3] = { 0 };
	int n;
	cin >> n;

	if (n % 5 == 1) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = 9 - i - 3 * j;
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	else if (n % 5 == 2) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = 9 - i * 3 - 2 + j;
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = 10 + i + 3 * j;
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}