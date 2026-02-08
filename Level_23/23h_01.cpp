#include <iostream>
using namespace std;

int arrs[5] = { 3,5,1,9,7 };
char rl[4];
int results[5];

void rot(int lev)
{
	if (lev == 4)
	{
		for (int i = 0; i < 5; i++)
		{
			// cout << arrs[i] << " ";
			return;
		}
	}

	if (rl[lev] == 'R')
	{
		int temp;
		temp = arrs[4];
		for (int j = 4; j > 0; j--)
		{
			arrs[j] = arrs[j - 1];
		}
		arrs[0] = temp;
	}
	else if (rl[lev] == 'L')
	{
		int temp;
		temp = arrs[0];
		for (int j = 0; j < 4; j++)
		{
			arrs[j] = arrs[j + 1];
		}
		arrs[4] = temp;
	}
	rot(lev + 1);

}

int main23001() {
	for (int i = 0; i < 4; i++)
	{
		cin >> rl[i];
	}

	rot(0);

	for (int i = 0; i < 5; i++)
	{
		cout << arrs[i] << " ";
	}

	return 0;
}