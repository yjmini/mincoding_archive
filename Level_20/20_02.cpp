#include <iostream>
#include <algorithm>
using namespace std;

void count(int lv)
{
	cout << lv << " ";
	if (lv == 0)
	{

		return;
	}

	count(lv - 1);
	cout << lv << " ";
}

int main2002() {
	int n;
	cin >> n;

	count(n);

	return 0;
}