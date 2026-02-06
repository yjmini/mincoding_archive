#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void tree3(int lev)
{
	if (lev == 2)
	{
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		tree3(lev + 1);
	}
}

int main2101()
{
	tree3(0);

	return 0;
}