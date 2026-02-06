#include <iostream>
using namespace std;

int arr[7][7] = {
		0,0,0,0,0,0,0,
		0,0,1,0,1,0,0,
		0,1,2,0,2,1,0,
		0,0,1,2,1,0,0,
		0,0,2,1,0,1,0,
		0,1,1,0,0,0,0,
		0,0,0,0,0,0,0
};

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

int canEat(int y, int x)
{
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= 7 || nx < 0 || nx >= 7)
			return 0;

		if (arr[ny][nx] != 1)
		{
			return 0;
		}
	}
	return 1;
}

int main21007() {

	int y, x;
	cin >> y >> x;

	arr[y][x] = 1;

	int cnt = 0;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (arr[i][j] == 2)
			{
				if (canEat(i, j) == 1)
				{
					cnt++;
				}
			}
		}
	}

	cout << cnt;

	return 0;
}