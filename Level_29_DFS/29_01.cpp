#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

int N;
int arr[101][101];

void dfs(int now)
{
	cout << now << " ";
	for (int i = 0; i < N; i++)
	{
		if (arr[now][i] == 0)
			continue;

		dfs(i);
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

	dfs(0);

	return 0;
}