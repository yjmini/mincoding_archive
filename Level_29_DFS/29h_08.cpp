#include <iostream>
using namespace std;

int dy[4] = { 0,1,0,-1 };
int dx[4] = { 1,0,-1,0 };

int main() {
	char map[4][4];
	
	for (int i = 0; i < 4; i++)
	{
		cin >> map[i];
	}

	for (int second = 0; second < 5; second++)
	{
		for (int i = 0; i < 4; i++)
		{

			for (int j = 0; j < 4; j++)
			{
				int flag = 0;
				if (map[i][j] == '_')
					continue;



				if (map[i][j] >= 'A' && map[i][j] <= 'Z')
				{
					int ny = i + dy[second % 4];
					int nx = j + dx[second % 4];

					if (ny < 0 || ny >= 4 || nx < 0 || nx >= 3)
						continue;
					if (map[ny][nx] == '#')
						continue;
					if (map[ny][nx] >= 'A' && map[ny][nx] <= 'Z')
						continue;

					map[ny][nx] = map[i][j];
					map[i][j] = '_';
					flag = 1;
					break;
				}

				if (flag == 1)
				{
					break;
				}
			}
		}

	}

	for (int i = 0; i < 4; i++)
	{
		cout << map[i] << '\n';
	}

	return 0;
}