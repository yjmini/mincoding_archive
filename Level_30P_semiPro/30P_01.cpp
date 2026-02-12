#include <iostream>

using namespace std;

int cnt;
int n;
int path[3];
int visited[10];

void bt(int lev)
{
	if (lev == 3)
	{
		cnt++;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == 1)
			continue;

		visited[i] = 1;

		path[lev] = i;
		bt(lev + 1);
		path[lev] = 0;

		visited[i] = 0;
	}
}

int main()
{
	cin >> n;

	bt(0);

	cout << cnt;

	return 0;
}