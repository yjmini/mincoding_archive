#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int map[7][7] = {
	0,0,0,0,0,0,0,
	0,0,0,1,0,1,1,
	0,1,0,0,1,0,0,
	0,0,0,0,0,1,0,
	0,1,0,0,0,0,0,
	0,1,0,0,0,0,0,
	0,0,0,0,0,0,0
};
int st, en;
int minCost = 21e8;
int visited[7];

void dfs(int now, int cost)
{
	if (now == en)
	{
		minCost = min(minCost, cost);
		return;
	}

	for (int i = 0; i < 7; i++)
	{
		if (map[now][i] == 0)
			continue;
		if (visited[i] == 1)
			continue;
		visited[now] = 1;
		dfs(i, cost + 1);
		visited[now] = 0;
	}
}

int main() 
{
	cin >> st >> en;

	dfs(st, 0);

	if (minCost == 21e8)
	{
		cout << 0;
	}
	else
	{
		cout << minCost;
	}

	return 0;
}