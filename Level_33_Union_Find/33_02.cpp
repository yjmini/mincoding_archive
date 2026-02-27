#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int parent[10] = { 0,0,0,3,3,3,6,6,8,8 };
int dat[10];

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
	int cnt = 0;
	char a, b;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		setUnion(int(a-'A'), int(b-'A'));
	}

	for (int i = 0; i < 10; i++)
	{
		//parent를 넣어서 찾아버리면 제대로 갱신이 안되어있는 상황이기 때문에 결과가 제대로 안나옴
		dat[find(i)]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (dat[i] > 0)
		{
			cnt++;
		}
	}

	cout << cnt << "개";

	return 0;
}