#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int map[6][6] = {
	0,0,0,0,1,0,
	1,0,1,0,0,1,
	1,0,0,1,0,0,
	1,1,0,0,0,0,
	0,1,0,1,0,1,
	0,0,1,1,0,0
};
int visited[6];
int K;

void bfs(int st)
{
	queue<int> q;
	visited[st] = 1;
	q.push(st);

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		cout << cur << '\n';

		for (int i = 0; i < 6; i++)
		{
			if (visited[i] == 1)
				continue;
			if (map[cur][i] == 0)
				continue;
			visited[i] = 1;
			q.push(i);
		}
	}
}

int main() {
	cin >> K;

	bfs(K);

	return 0;
}