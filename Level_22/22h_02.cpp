#include <iostream>
using namespace std;


int nu;
char date[50];

void goDate(int lev)
{
	if (lev == nu)
	{
		cout << date << endl;
		return;
	}
	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			date[lev] = 'x';
		}
		else if (i == 1)
		{
			date[lev] = 'o';
		}

		goDate(lev + 1);
		date[lev] = '\0';
	}
}

int main22002() {
	cin >> nu;

	goDate(0);

	return 0;
}