#include <iostream>
using namespace std;

int main12004() {
	int arr[5][5] = { 0 };
	int a;
	cin >> a;

	for (int i = 0; i < 5; i++)
	{
		arr[0][i] = a;
		arr[4][i] = a;
		arr[i][0] = a;
		arr[i][4] = a;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 0) {
				cout << "_";
			}
			else {
				cout << arr[i][j];
			}
		}
		cout << endl;
	}

	return 0;
}