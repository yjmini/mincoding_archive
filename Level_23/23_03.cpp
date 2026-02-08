#include <iostream>
using namespace std;

char chocolates[4];
char chocoType[4] = { "ABC" };
int chocoEA;
int cntChoco = 0;

void sortChoco(int lev)
{
	if (lev == chocoEA)
	{
		cntChoco++;
		return;
	}
	for (int i = 0; i < 3; i++)
	{


		chocolates[lev] = 'A' + i;
		if (lev >= 2 && chocolates[lev - 2] == chocolates[lev - 1] && chocolates[lev - 1] == chocolates[lev])
		{
			continue;
		}
		sortChoco(lev + 1);
		chocolates[lev] = '\0';
	}
}

int main2303() {
	cin >> chocoEA;

	sortChoco(0);

	cout << cntChoco;

	return 0;
}