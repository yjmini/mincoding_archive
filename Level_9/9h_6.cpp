#include <iostream>
using namespace std;

int main996() {
	int arr[3][3] = { {3,5,14},{2,3,9},{6,2,7} };
	int cnt = 0;
	int n;
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] % n == 0) {
				cnt++;
			}
		}
	}
	cout << cnt;

	return 0;
}