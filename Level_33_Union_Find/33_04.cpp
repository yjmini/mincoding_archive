#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int parent[100] = { 0 };

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

	if (t1 >= 'A' && t2 < 'A') parent[t2] = t1;
	else if (t2 >= 'A' && t1 < 'A') parent[t1] = t2;
	else parent[t2] = t1;
}

int main()
{
	int N, K;
	cin >> N >> K;

	for (int i = 0; i < 100; i++)
	{
		parent[i] = i;
	}

	for (int i = 0; i < N; i++)
	{
		string u, v;
		cin >> u >> v;

		int a, b;

		if (u[0] >= 'A' && u[0] <= 'Z')
			a = u[0];
		else
			a = stoi(u);
		
		if (v[0] >= 'A' && v[0] <= 'Z')
			b = v[0];
		else
			b = stoi(v);

		setUnion(a, b);
	}

	for (int i = 1; i <= K; i++)
	{
		cout << (char)(find(i));
	}

	return 0;
}