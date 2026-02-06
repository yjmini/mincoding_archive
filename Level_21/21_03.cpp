#include <iostream>
#include <cstring>
using namespace std;


void treeN(int lev, int branch)
{
	if (lev == 0)
		return;
	for (int i = 0; i < branch; i++)
	{
		treeN(lev - 1, branch);
	}

}

int main2103() {
	int lev, branch;
	cin >> lev >> branch;

	treeN(lev, branch);

	return 0;
}