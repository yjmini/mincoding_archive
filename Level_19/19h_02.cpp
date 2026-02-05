#include <iostream>
using namespace std;

int map[5][4];

int dy[8] = { -1, 1, 0, 0, -1, 1, 1, -1 };
int dx[8] = { 0, 0, -1, 1, -1, -1, 1, 1 };

int isStable(int y, int x)
{
	for (int i = 0; i < 8; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= 5 || nx < 0 || nx >= 4)
		{
			continue;
		}
		if (map[ny][nx] == 1)
		{
			return 0;
		}
	}
	return 1;

}

int main19002() {
	int flag = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (map[i][j] == 1)
			{
				if (isStable(i, j) == 0)
				{
					flag = 0;
					i = 5;
					break;
				}
				else
				{
					flag = 1;
				}
			}

		}
	}

	if (flag == 1)
	{
		cout << "안정된 상태";
	}
	else
	{
		cout << "불안정한 상태";
	}

	return 0;
}