#include <iostream>
using namespace std;

char map[3][5] = {
	"ABGK",
	"TTAB",
	"ACCD"
};
char pattern[2][3];

int isExist(int y, int x)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (map[i + y][j + x] != pattern[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}

int main19006() {
	int cnt = 0;

	for (int i = 0; i < 2; i++)
	{
		cin >> pattern[i];
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (isExist(i, j) == 1)
			{
				cnt++;
			}

		}
	}
	if (cnt > 0)
	{
		cout << "발견(" << cnt << "개)";
	}
	else
	{
		cout << "미발견";
	}

	return 0;
}