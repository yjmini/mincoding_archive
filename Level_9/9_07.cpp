#include <iostream>
using namespace std;

int main907() {
	int arr[6][2];
	int cnt = 0;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
			if (j == 1 && arr[i][j] > arr[i][j-1]) {
				int temp;
				temp = arr[i][j];
				arr[i][j] = arr[i][j - 1];
				arr[i][j - 1] = temp;
				cnt++;
			}
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << cnt << "명";

	return 0;
}