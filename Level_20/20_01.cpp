#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void test(int lv)
{
	if (lv == 3)
		return;
	test(lv+1);
}

int main2001()
{
	test(0);

	return 0;
}