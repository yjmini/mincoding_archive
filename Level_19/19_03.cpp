#include <iostream>
using namespace std;

// 상하좌우 대각선
int dy[8] = { -1,1,0,0,-1,-1,1,1 };
int dx[8] = { 0,0,-1,1,-1,1,1,-1 };

char map[4][5];

// 폭발 범위
void explode(int y, int x)
{
	for (int i = 0; i < 8; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >=4 || nx < 0 || nx >= 5)
		{
			continue;
		}

		map[ny][nx] = '#';
	}
}

int main1903() {
	// 초기화
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			map[i][j] = '_';
		}
	}

	int y1, x1, y2, x2;
	cin >> y1 >> x1 >> y2 >> x2;

	// 폭발
	explode(y1, x1);
	explode(y2, x2);

	//출력
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}