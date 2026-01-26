#include <iostream>
using namespace std;

int main887() {
	int arr[3][3] = { 0 };

	int x, y, a;
	cin >> y >> x >> a;

	arr[y][x] = a;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}