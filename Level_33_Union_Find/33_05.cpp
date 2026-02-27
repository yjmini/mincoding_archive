#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int population[50];
int parent[50];
int Dead[50];

int find(int tar)
{
	if (tar == parent[tar])
		return tar;

	return parent[tar] = find(parent[tar]);
}

void setUnion(int a, int b)
{
	int t1 = find(a);
	int t2 = find(b);

	if (t1 == t2)
		return;

	parent[t2] = t1;
}

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> population[i];
		parent[i] = i;
	}
	int S;
	cin >> S;

	for (int i = 0; i < S; i++)
	{
		string cmd, a, b;
		cin >> cmd >> a >> b;
		if (cmd == "alliance")
		{
			setUnion(a[0]-'A', b[0]-'A');
		}
		else if (cmd == "war")
		{
			int r1 = find(a[0] - 'A');
			int r2 = find(b[0] - 'A');

			int pop1 = 0, pop2 = 0;

			for (int j = 0; j < N; j++)
			{
				if (Dead[j] == -1)
					continue;
				if (r1 == find(j))
					pop1 += population[j];
				else if (r2 == find(j))
					pop2 += population[j];
			}

			int lose = -1;
			if (pop1 > pop2) lose = r2;
			else if (pop2 > pop1) lose = r1;

			if (lose != -1)
			{
				for (int j = 0; j < N; j++)
				{
					if (find(j) == lose)
					{
						Dead[j] = -1;
					}
				}
			}
		}
	}

	int aliveCnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (Dead[i] != -1)
			aliveCnt++;
	}

	cout << aliveCnt;

	return 0;
}