#include <iostream>
using namespace std;

int main1402() {
	int arr[5][4];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += arr[i][j];
		}
		cout << sum << " ";
	}

	return 0;
}
