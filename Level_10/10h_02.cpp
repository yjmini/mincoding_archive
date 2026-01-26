#include <iostream>
using namespace std;

int main10002() {
	int arr[5][5];
	int n;
	cin >> n;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = 21 + i - j * 5;
			if (i == n) {
				arr[i][j] = n;
			}
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}