#include <iostream>
#include <algorithm>
using namespace std;

char people[30];
int n;
char path[30];

void bt(int lev)
{
	if (lev == n)
	{
		cout << path << '\n';
		return;
	}
	for (int i = 0; i < 30; i++)
	{
		if (people[i] == '\0')
			continue;
	
		path[lev] = people[i];
		bt(lev + 1);
		path[lev] = 0;
	}
}

int main() {
	cin >> people;
	cin >> n;

	
	bt(0);

	return 0;
}