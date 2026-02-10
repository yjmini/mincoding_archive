#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> v;

void _push()
{
	int n;
	cin >> n;
	v.push_back(n);
}

void _pop()
{
	v.pop_back();
}

void _printLast()
{
	cout << v[v.size() - 1] << '\n';
}

int main()
{
	int K;
	cin >> K;

	for (int i = 0; i < K; i++)
	{
		char str[20];
		cin >> str;
		if (strcmp(str, "push") == 0)
		{
			_push();
		}
		else if (strcmp(str, "pop") == 0)
		{
			_pop();
		}
		else if (strcmp(str, "printLast") == 0)
		{
			_printLast();
		}
	}
	return 0;
}