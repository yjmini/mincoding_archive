#include <iostream>
#include <cstring>
using namespace std;

int n;
char str[3][5];
int cnt;
char path[5];

void bt(int lev)
{
	if (lev == 4)
	{
		cnt++;
		for (int i = 0; i < 3; i++)
		{
			if (strcmp(path, str[i]) == 0)
			{
				cout << cnt << '\n';
				// cout << path << endl;
			}

		}
		return;
	}
	for (int i = 'A'; i <= 'Z'; i++)
	{
		path[lev] = i;
		bt(lev + 1);
		path[lev] = 0;
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	
	bt(0);

	return 0;
}