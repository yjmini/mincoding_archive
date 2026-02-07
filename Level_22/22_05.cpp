#include <iostream>
using namespace std;

int path[4];
int n;

void pr(int lev)
{
	if (lev == 4)
	{
		for (int i = 0; i < 4; i++)
		{
			cout << path[i];
		}
		cout << endl;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		path[lev] = i + 1;
		pr(lev + 1);
		path[lev] = 0;
	}
}

int main2205() {
	
	cin >> n;

	pr(0);


	return 0;
}