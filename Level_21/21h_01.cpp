#include <iostream>
#include <algorithm>
using namespace std;


int main21001() {
	char arr[4][4];
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	int ay, ax;
	int by, bx;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == 'A')
			{
				ay = i;
				ax = j;
			}
			if (arr[i][j] == 'B')
			{
				by = i;
				bx = j;
			}
		}
	}

	int dy = abs(ay - by);
	int dx = abs(ax - bx);

	cout << dy + dx;

	return 0;
}