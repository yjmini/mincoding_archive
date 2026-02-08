#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int n;
char members[6] = { "BTSKR" };
char sorted[6];
int cnt = 0;
int vstd[5];

void func(int lev)
{
	

	if (lev == n)
	{
		int flag = 0;

		for (int i = 0; i < n; i++)
		{
			if (sorted[i] == 'S')
			{
				flag = 1;
				break;
			}
		}

		if (flag == 1)
		{
			cnt++;
			//cout << sorted << endl;
		}
		return;

	}
	for (int i = 0; i < 5; i++)
	{
		if (vstd[i] == 1)
		{
			continue;
		}
		vstd[i] = 1;
		sorted[lev] = members[i];
		func(lev + 1);
		sorted[lev] = '\0';
		vstd[i] = 0;
	}

}

int main2304() {
	cin >> n;

	func(0);

	cout << cnt;

	return 0;
}