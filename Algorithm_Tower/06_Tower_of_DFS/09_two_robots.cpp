#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Edge
{
	int to;
	int cost;
};

int N;
int st, en;
vector<Edge> map[100001];
int visited[100001];
int minCost = 21e8;

void dfs(int now, int costSum, int maxCost)
{
	// 종료 조건: 목적지 도달했을 때
	if (now == en)
	{
		minCost = min(costSum - maxCost, minCost);
		return;
	}
	for (int i = 0; i < map[now].size(); i++)
	{
		Edge next = map[now][i];

		// 부모 선택시 이미 방문한 곳이므로 skip
		if (visited[next.to] == 1)
		{
			continue;
		}

		// 현재의 cost가 더 큰 경우
		if (next.cost > maxCost)
		{
			visited[next.to] = 1;
			dfs(next.to, costSum + next.cost, next.cost);
			visited[next.to] = 0;
		}

		else
		{
			visited[next.to] = 1;
			dfs(next.to, costSum + next.cost, maxCost);
			visited[next.to] = 0;
		}

	}
}

int main()
{
	cin >> N >> st >> en;
	for (int i = 0; i < N - 1; i++)
	{
		int from, to, cost;
		cin >> from >> to >> cost;
		map[from].push_back({ to,cost });
		map[to].push_back({ from,cost });
	}

	visited[st] = 1;
	dfs(st, 0, 0);

	cout << minCost;

	return 0;
}