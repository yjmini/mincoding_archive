#include <iostream>

using namespace std;

int map[6][6] = {
	0,0,1,1,0,1,
	0,0,0,1,1,1,
	0,0,0,0,1,1,
	0,0,0,0,0,0,
	1,0,0,0,0,1,
	0,0,0,0,0,0
};
int visited[6];

int K;

void dfs(int now)
{
	visited[now] = 1;
	cout << now << " ";

	for (int i = 0; i < 6; i++)
	{
		if (map[now][i] == 0)
			continue;
		if (visited[i] == 1)
			continue;

		visited[i] = 1;
		dfs(i);
	}
}

int main()
{

	cin >> K;

	dfs(K);

	return 0;
}