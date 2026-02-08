#include <iostream>
#include <cstring>
using namespace std;

char alphabets[5];
char sortedcase[5];
int cntn = 0;

void check(int lev)
{
	if (lev == 4)
	{
		cntn++;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (lev > 0)
		{
			if (sortedcase[lev - 1] == 'B' && alphabets[i] == 'T')
				continue;
			if (sortedcase[lev - 1] == 'T' && alphabets[i] == 'B')
				continue;
		}

		sortedcase[lev] = alphabets[i];
		check(lev + 1);
		sortedcase[lev] = '\0';
	}
}

int main2302() {
	cin >> alphabets;

	check(0);

	cout << cntn;
	return 0;
}
