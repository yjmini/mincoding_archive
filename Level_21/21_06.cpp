#include <iostream>
using namespace std;

int cnt = 0;
int br, lv;

void treeN(int lev)
{
	cnt++;
	if (lev == lv)
	{
		return;
	}
	for (int i = 0; i < br; i++)
	{
		treeN(lev+1);
	}
}

int main2106() {

	cin >> br >> lv;

	treeN(0);

	cout << cnt;
	return 0;
}