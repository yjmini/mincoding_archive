#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main()
{
	priority_queue<int> pq;

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		pq.push(str[i]);
	}

	while (!pq.empty())
	{
		char now = pq.top();
		pq.pop();

		cout << now;
	}

	return 0;
}