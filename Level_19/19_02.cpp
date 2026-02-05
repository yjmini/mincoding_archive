#include <iostream>
#include <algorithm>
using namespace std;

int map[5][5] = {
	3,3,5,3,1,
	2,2,4,2,6,
	4,9,2,3,4,
	1,1,1,1,1,
	3,3,5,9,2
};

int dy[4] = { -1, -1, 1, 1 };
int dx[4] = { -1, 1, -1, 1 };


int sum(int y, int x)
{
	int sum = 0;
	//모든방향 sum
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		//벽 체크
		if (ny < 0 || ny >= 5 || nx < 0 || nx >= 5)
		{
			continue;
		}
		sum += map[ny][nx];

	}
	return sum;
}

int main1902() {

	int y, x;
	int maxVal = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int curSum = sum(i, j);

			//maxVal 갱신할 때마다 최댓값과 좌표 갱신
			if (maxVal < curSum)
			{
				maxVal = curSum;
				y = i;
				x = j;
			}
		}
	}
	cout << y << " " << x;


	return 0;
}