#include <iostream>
using namespace std;


int main1111() {
	int arr[4][4] = { {1,3,6,2}, {4,2,4,5}, {6,3,7,3}, {1,5,4,6} };
	int select[16] = { 0 };

	int n;
	cin >> n;
	int idx = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] > n) {
				select[idx] = arr[i][j];
				idx++;
			}
		}
	}

	for (int i = 0; i < 16; i++)
	{
		if (select[i] != 0) {
			cout << select[i] << " ";
		}
	}

	return 0;
}