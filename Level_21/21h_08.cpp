#include <iostream>
#include <cstring>
using namespace std;

char arr[5][4] = {
	"___",
	"___",
	"ATK",
	"___",
	"___"
};

void cmdlist(int y, int x, char* cmd)
{
	if (strcmp(cmd, "UP") == 0)
	{
		arr[y - 1][x] = arr[y][x];
		arr[y][x] = '_';
	}
	else if (strcmp(cmd, "DOWN") == 0)
	{
		arr[y + 1][x] = arr[y][x];
		arr[y][x] = '_';
	}
	else if (strcmp(cmd, "LEFT") == 0)
	{
		arr[y][x - 1] = arr[y][x];
		arr[y][x] = '_';
	}
	else if (strcmp(cmd, "RIGHT") == 0)
	{
		arr[y][x + 1] = arr[y][x];
		arr[y][x] = '_';
	}
}

int main21008() {
	for (int i = 0; i < 7; i++)
	{
		char m, cmd[10];
		cin >> m >> cmd;

		for (int j = 0; j < 5; j++)
		{
			int flag = 0;
			for (int k = 0; k < 3; k++)
			{
				if (arr[j][k] == m)
				{
					cmdlist(j, k, cmd);
					flag = 1;
					break;
				}
			}
			if (flag == 1)
				break;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}