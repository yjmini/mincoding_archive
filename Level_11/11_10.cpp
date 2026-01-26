#include <iostream>
using namespace std;


int main1110() {
	int arr[2][5] = { {3, 2, 6, 2, 4}, {1, 4, 2, 6, 5} };
	int n;
	cin >> n;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == n) {
				cout << "값이 존재합니다";
				return 0;
			}
		}
	}

	cout << "값이 없습니다";

	return 0;
}