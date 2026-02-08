#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

char cards[6];
char selected[5];
int counting = 0;

void sortCards(int lev)
{
	if (lev == 4)
	{
		counting++;
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		
		selected[lev] = cards[i];

		if (lev >= 1)
		{
			if (abs(selected[lev] - selected[lev - 1]) > 3)
			{
				continue;
			}
		}

		sortCards(lev + 1);
		selected[lev] = '\0';
	}
}

int main2306() {
	cin >> cards;

	sortCards(0);
	
	cout << counting;
	return 0;
}