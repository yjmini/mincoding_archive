#include <iostream>
using namespace std;

int n;
int arr[100][100];
int path[100];

void dfs(int now, int lev)
{
	path[lev] = now;

	if (lev == 2)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << path[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[now][i] == 0)
			continue;
		
		dfs(i, lev + 1);
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	dfs(0, 0);

	return 0;
}