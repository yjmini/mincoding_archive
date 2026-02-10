#include <iostream>
#include <vector>
using namespace std;

int n;
int map[100][100];
int visited[100];

void dfs(int now)
{
	visited[now] = 1;
	cout << now << " ";
	for (int i = 0; i < n; i++)
	{
		if (map[now][i] == 0)
			continue;
		if (visited[i] == 1)
			continue;
		dfs(i);
	}
}

int main() {

	cin >> n;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}

	dfs(0);

	return 0;
}

