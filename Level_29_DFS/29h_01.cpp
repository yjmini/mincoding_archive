#include <iostream>
#include <algorithm>
using namespace std;

int jump;
int map[11] = { 0,3,1,2,1,3,2,1,2,1,-1 };

void dfs(int now, int jump)
{

	if (map[now] == 0)
	{
		cout << "시작 ";
	}
	else if(map[now] != -1)
	{
		cout << map[now] << " ";
	}


	if (now == 10)
	{
		cout << "도착 ";

		return;
	}

	dfs(now + jump, map[now + jump]);

	if (map[now] == 0)
	{
		cout << "시작 ";
	}

	else
	{
		cout << map[now] << " ";
	}

}

int main() {
	cin >> jump;
	
	dfs(0, jump);

	return 0;
}