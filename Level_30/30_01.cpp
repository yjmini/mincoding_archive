#include <iostream>
#include <algorithm>
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

void dfs(int now)
{
	cout << now << " ";
	visited[now] = 1;


	for (int i = 0; i < 6; i++)
	{
		if (visited[i] == 1)
			continue;
		if (map[now][i] == 0)
			continue;

		dfs(i);
	}
}

int main() {
	int K;
	cin >> K;

	dfs(K);


	return 0;
}