#include <iostream>
using namespace std;

int main11105() {
	int arr[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				arr[i][j] = '#';
				cout << (char)arr[i][j];
			}
			else
			{
				cout << arr[i][j];
			}

		}
		cout << endl;
	}

	return 0;
}