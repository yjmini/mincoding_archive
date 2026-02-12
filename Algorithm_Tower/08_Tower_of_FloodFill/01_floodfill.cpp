#include <iostream>
#include <queue>
using namespace std;

struct Point
{
	int y;
	int x;
};

int arr[5][5];
int visited[5][5];
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

void bfs(Point cp)
{
	queue<Point> q;
	visited[cp.y][cp.x] = 1;
	arr[cp.y][cp.x] = 1;
	q.push(cp);

	while (!q.empty())
	{
		Point cur = q.front();
		q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			Point np = { cur.y + dy[i], cur.x + dx[i] };

			if (np.y < 0 || np.y >= 5 || np.x < 0 || np.x >= 5)
				continue;
			if (visited[np.y][np.x] == 1)
				continue;

			arr[np.y][np.x] = arr[cur.y][cur.x] + 1;

			visited[np.y][np.x] = 1;
			q.push(np);
		}
	}

}

int main()
{
	Point pt;
	cin >> pt.y >> pt.x;

	bfs(pt);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}