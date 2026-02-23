#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int nums[5];
int path[3];
int visited[10];
int flag;

void dfs(int lev)
{
	if (lev == 3 && flag == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << path[i];
		}
		flag = 1;
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (visited[i] == 1)
			continue;
		if (lev == 0 && nums[i] == 0)
			continue;

		visited[i] = 1;
		path[lev] = nums[i];
		dfs(lev + 1);
		//path[lev] = 0;
		//visited[i] = 0;
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}
	sort(nums, nums + n);

	dfs(0);
	//중복없이 인덱스 0이 0보다 커야하는 dfs

	return 0;
}
