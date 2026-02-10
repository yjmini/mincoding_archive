#include <iostream>
using namespace std;

int n;
int arr[100][100];

void dfs(int node)
{
	cout << node << " ";

	for (int i = 0; i < n; i++)
	{
		if (arr[node][i] == 0)
			continue;
		dfs(i);
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

	dfs(0);

	return 0;
}