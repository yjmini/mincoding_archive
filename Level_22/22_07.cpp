#include <iostream>
#include <cstring>
using namespace std;

char path3[3];
int cnt = 0;
char search[4];


void recur_ad(int lev)
{
	if (lev == 3)
	{
		cnt++;
		//cout << path3 << endl;
		if (strcmp(path3, search) == 0)
		{
			cout << cnt << "번째";
			return;

		}
		else
		{
			return;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		path3[lev] = 'A' + i;
		recur_ad(lev + 1);
		path3[lev] = '\0';
	}
}

int main2207() {
	cin >> search;

	recur_ad(0);



	return 0;
}