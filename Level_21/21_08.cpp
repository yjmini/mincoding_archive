#include <iostream>
#include <cstring>
using namespace std;


int main2108() {
	int n;
	cin >> n;

	int y = 5;
	int x = 5;

	for (int i = 0; i < n; i++)
	{
		char cmd[10];
		cin >> cmd;

		if (strcmp(cmd, "up") == 0)
		{
			y--;
		}
		if (strcmp(cmd, "down") == 0)
		{
			y++;
		}
		if (strcmp(cmd, "left") == 0)
		{
			x--;
		}
		if (strcmp(cmd, "right") == 0)
		{
			x++;
		}
		if (strcmp(cmd, "click") == 0)
		{
			cout << y << "," << x << endl;
		}
	}

	return 0;
}