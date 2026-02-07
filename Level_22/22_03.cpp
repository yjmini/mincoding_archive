#include <iostream>
using namespace std;

int target;
char path[4];

void tree(int lev)
{
	if (lev == target)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (i==0)
		{
			path[lev] = 'B';
		}
		else if (i == 1)
		{
			path[lev] = 'G';
		}
		else if (i == 2)
		{
			path[lev] = 'T';
		}
		else if (i == 3)
		{
			path[lev] = 'K';
		}
		tree(lev + 1);
		path[lev] = '\0';
	}
}

int main2203() {

	cin >> target;
	tree(0);

	return 0;
}