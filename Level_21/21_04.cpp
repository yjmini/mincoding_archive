#include <iostream>
using namespace std;

int h;

void treePrint(int lev)
{
	cout << lev;
	if (lev == h)
		return;
	for (int i = 0; i < 2; i++)
	{
		treePrint(lev + 1);
	}
}

int main2104() {
	cin >> h;

	treePrint(0);

	return 0;
}