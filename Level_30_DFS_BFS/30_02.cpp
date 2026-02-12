#include <iostream>

using namespace std;

int map[6][6] = {
	0,0,1,0,2,0,
	5,0,3,0,0,0,
	0,0,0,0,0,7,
	2,0,0,0,8,0,
	0,0,9,0,0,0,
	4,0,0,7,0,0
};
int K;
int visited[6];
int totalCost;

void dfs(int now, int cost)
{
	visited[now] = 1;
	cout << now << " " << totalCost << '\n';

	for (int i = 0; i < 6; i++)
	{
		if (map[now][i] == 0)
			continue;
		if (visited[i] == 1)
			continue;

		visited[i] = 1;
		totalCost += map[now][i];
		dfs(i, cost+map[now][i]);
	}
}

int main() 
{
	cin >> K;

	dfs(K, 0);

	return 0;
}