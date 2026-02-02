#include <iostream>
using namespace std;

int main16002() {
	char arr[6][3];

	char ch = 'A';

	int a, b;
	cin >> a >> b;

	for (int j = 2; j >= 0; j--)
	{
		for (int i = 5; i >= 0; i--)
		{
			arr[i][j] = ch;
			ch++;
		}
	}

	cout << arr[a][b];

	return 0;
}