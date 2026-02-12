#include <iostream>
#include <algorithm>
using namespace std;

int N;
int arr[100][100];
int visited[100];
int st, en;
int maxCost;
int minCost = 21e8;

void dfs(int now, int cost)
{
	if (now == en)
	{
		maxCost = max(maxCost, cost);
		minCost = min(minCost, cost);
		return;
	}
	for (int i = 0; i < N; i++)
	{
		if (visited[i] == 1)
			continue;
		if (arr[now][i] == 0)
			continue;

		visited[i] = 1;
		dfs(i, cost + arr[now][i]);
		visited[i] = 0;
	}
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}

	cin >> st >> en;

	visited[st] = 1;
	dfs(st, 0);

	cout << minCost << endl << maxCost;

	return 0;
}