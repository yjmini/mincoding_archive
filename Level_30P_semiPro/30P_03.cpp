#include <iostream>
using namespace std;

int map[6][6];
char path[7];
int visited[6];

int isEmpty(int now)
{
	for (int i = 0; i < 6; i++)
	{
		if (map[now][i]!=0)
		{
			return 0;
		}
	}
	return 1;
}

void dfs(int now)
{
	if (isEmpty(now) == 1)
	{
		cout << path << '\n';
		return;
	}
	for (int i = 0; i < 6; i++)
	{
		if (map[now][i] == 0)
			continue;
		if (visited[i] == 1)
			continue;

		visited[i] = 1;
		path[now+1] = i + 'A';
		dfs(i);
		path[now+1] = '\0';
		visited[i] = 0;
	}
}

int main() {
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> map[i][j];
		}
	}

	visited[0] = 1;
	path[0] = 'A';
	dfs(0);

	return 0;
}