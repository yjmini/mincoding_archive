#include <iostream>
using namespace std;

char murder[3][5];

int isSafe()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = j + 1; k < 4; k++)
			{
				if (murder[i][j] == '#' && murder[i][k] == '#')
				{
					return 1;
				}

			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = j+1; k < 3; k++)
			{
				if (murder[j][i] == '#' && murder[k][i] == '#')
				{
					return 1;
				}

			}
		}
	}
	return 0;
}

int main23002() {
	for (int i = 0; i < 3; i++)
	{
		int y;
		int x;
		cin >> y >> x;
		murder[y][x] = '#';
	}

	if (isSafe() == 1)
	{
		cout << "위험";
	}
	else
	{
		cout << "안전";
	}

	return 0;
}