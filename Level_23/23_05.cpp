#include <iostream>
using namespace std;

char except;
char people[6] = { "EWABC" };
int vtd[5];
char boat[5];

void order(int lev)
{
	if (lev == 4)
	{
		cout << boat << endl;
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		if (vtd[i] == 1)
			continue;

		vtd[i] = 1;
		boat[lev] = people[i];
		order(lev + 1);
		boat[lev] = '\0';
		vtd[i] = 0;
	}
}

int main2305() {
	cin >> except;
	
	for (int i = 0; i < 5; i++)
	{
		if (people[i] == except)
		{
			vtd[i] = 1;
		}
	}

	order(0);

	return 0;
}