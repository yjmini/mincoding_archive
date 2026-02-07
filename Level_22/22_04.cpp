#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

char updown[5][10];
int fl = 1;

int main2204() {
	for (int i = 0; i < 5; i++)
	{
		cin >> updown[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (strcmp(updown[i], "up") == 0)
		{
			fl++;
		}
		else if (strcmp(updown[i], "down") == 0)
		{
			fl--;

		}
	}

	if (fl <= 0)
	{
		cout << "B" << abs(fl) + 1;
	}
	else
	{
		cout << fl;
	}

	return 0;
}