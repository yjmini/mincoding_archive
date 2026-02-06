#include <iostream>
using namespace std;

void BBB(int lev)
{
	if (lev == 3)
		return;

	BBB(lev + 1);
}

int main20001() {
	BBB(0);

	return 0;
}