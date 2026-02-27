#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Edge
{
	int a;
	int b;
	int cost;
};

struct cmp
{
	bool operator() (Edge a, Edge b)
	{
		return a.cost < b.cost;
	}
};

int main()
{
	int N;
	cin >> N;

	vector<vector<int>> map(N, vector<int>(N));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}

	priority_queue<Edge, vector<Edge>, cmp> pq;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] > 0)
			{
				pq.push({ i, j, map[i][j] });
			}
		}
	}
	int cnt = 0;
	while (!pq.empty())
	{
		Edge now = pq.top();
		pq.pop();

		cout << (char)(now.a + 65) << "-" << (char)(now.b + 65) << " " << now.cost << '\n';
		cnt++;
		if (cnt == 3) break;
	}

	return 0;
}