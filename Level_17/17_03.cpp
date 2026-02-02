#include <iostream>
using namespace std;

int main1703() {
	int arr[3][3] = {
		3,5,9,
		4,2,1,
		1,1,5
	};
	
	int mask[3][3];
	int result[3][3];

	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> mask[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			result[i][j] = arr[i][j] * mask[i][j];
			sum += result[i][j];
		}
	}

	cout << sum;

	return 0;
}