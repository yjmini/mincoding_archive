#include <iostream>
using namespace std;

int main() {
	int n;
	char ch;
	cin >> n >> ch;

	int arr[5][5] = { 0 };

	for (int i = 4; i >=0; i--)
	{
		arr[n-1][i] = ch;
		ch++;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 0) {
				cout << arr[i][j];
			}
			else {
				cout << (char)arr[i][j];
			}

		}
		cout << endl;
	}

	return 0;
}