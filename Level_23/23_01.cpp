#include <iostream>
using namespace std;

char prize[4];
char friends[5];
int visited[4];

void prizeCase(int lev)
{
	if (lev == 3)
	{
		cout << prize << endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (visited[i] == 1)
			continue;
		visited[i] = 1;
		prize[lev] = friends[i];
		prizeCase(lev + 1);
		prize[lev] = '\0';
		visited[i] = 0;
	}
}

int main2301() {
	cin >> friends;

	prizeCase(0);

	return 0;
}