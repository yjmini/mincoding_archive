#include <iostream>
using namespace std;

int main11102() {
	int arr[3][3] = { {1, 1, 1},{1, 2, 1},{3, 6, 3} };
	int n;
	cin >> n;
	int cnt = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == n) {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}