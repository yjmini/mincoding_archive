#include <iostream>
#include <string>
using namespace std;

string str;
int arr[100][100];

void dfs(int nowIdx)
{
	cout << str[nowIdx];

	for (int i = 0; i < str.size(); i++)
	{
		if (arr[nowIdx][i] == 0)
			continue;
		
		dfs(i);
	}
}

int main() {
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 0; j < str.size(); j++)
		{
			cin >> arr[i][j];
		}
	}

	dfs(0);

	return 0;
}