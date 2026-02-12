#include <iostream>
using namespace std;

char ox[2] = { 'o','x' };
char path[11];
int n;

void func(int lev)
{
	if (lev == n)
	{
		cout << path << '\n';
		return;
	}

	for (int i = 0; i < 2; i++)
	{
		path[lev] = ox[i];
		func(lev + 1);
		path[lev] = 0;
	}
}

int main() {

	cin >> n;

	func(0);

	return 0;
}