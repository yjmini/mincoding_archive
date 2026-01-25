#include <iostream>
using namespace std;

int main906() {
	int arr[3][3];
	char ch = 'A';
	int x1, y1, x2, y2;
	cin >> y1 >> x1 >> y2 >> x2;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = ch;
			ch++;
		}
	}

	int temp;
	temp = arr[y1][x1];
	arr[y1][x1] = arr[y2][x2];
	arr[y2][x2] = temp;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << (char)arr[i][j];
		}
		cout << endl;
	}

	return 0;
}