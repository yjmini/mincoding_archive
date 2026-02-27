#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int parent[50] = { 0 };

int find(int tar)
{
	if (tar == parent[tar])
		return tar;

	return parent[tar] = find(parent[tar]);
}

bool setUnion(int a, int b)
{
	int t1 = find(a);
	int t2 = find(b);

	if (t1 == t2)
		return false;

	parent[t2] = t1;
	return true;
}

int main()
{
	int N;
	cin >> N;
	int flag = 0;

	vector<vector<int>> map(N, vector<int>(N));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < 50; i++)
	{
		parent[i] = i;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			if (map[i][j] > 0)
			{
				if (setUnion(i, j) == false)
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
			break;
	}


	if (flag == 1)
		cout << "cycle 발견" << '\n';
	else
		cout << "미발견" << '\n';

	return 0;
}