#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<string> names(3);
vector<string> path(3);


void bt(int lev)
{
	if (lev == 3)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << path[i] << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		path[lev] = names[i];
		bt(lev + 1);
		path[lev] = '\0';
	}
}

int main() {
	for (int i = 0; i < 3; i++)
	{
		cin >> names[i];
	}

	sort(names.begin(), names.end());

	bt(0);

	return 0;
}