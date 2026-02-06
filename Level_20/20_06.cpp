#include <iostream>
using namespace std;

void printNum(int st, int en)
{
	cout << st << " ";
	if (st == en)
		return;
	printNum(st + 1, en);
	cout << st << " ";
}

int main2006() {
	int a, b;
	cin >> a >> b;

	printNum(a, b);

	return 0;
}