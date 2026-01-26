#include <iostream>
using namespace std;

int main10005() {
	int a, b, c;
	cin >> a >> b >> c;

	int arr[3][4];

	for (int i = 0; i < 4; i++)
	{
		arr[0][i] = a;
		arr[1][i] = b;
		arr[2][i] = c;
		a++;
		b++;
		c++;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}