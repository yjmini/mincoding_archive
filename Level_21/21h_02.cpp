#include <iostream>
using namespace std;

int main21002() {
	int arr[3][4] = {
		3,4,1,5,
		3,4,1,3,
		5,2,3,6
	};
	int sum[4] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i] = sum[i] + arr[j][i];
		}
	}

	int idx;
	cin >> idx;

	cout << sum[idx];

	return 0;
}