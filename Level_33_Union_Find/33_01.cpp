#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Edge
{
	int a;
	int b;
};

vector<Edge> v;
int parent[50];
int flag;

int find(int tar)
{
	if (tar == parent[tar])
	{
		return tar;
	}

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

int main() {
	int N;
	cin >> N;

	char a, b;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		v.push_back({ int(a-'A'), int(b-'A') });
	}

	for (int i = 0; i < 50; i++)
	{
		parent[i] = i;
	}

	for (Edge sel : v)
	{
		int a = sel.a;
		int b = sel.b;
		if (setUnion(a, b) == true)
			continue;
		else
		{
			cout << "발견" << '\n';
			flag = 1;
			break;
		}

	}
	if (flag==0)
		cout << "미발견" << '\n';

	return 0;
}