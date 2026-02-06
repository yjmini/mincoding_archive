#include <iostream>
using namespace std;

void divNum(int n)
{
	if (n == 0)
		return;
	divNum(n / 2);
	cout << n << " ";
}

int main2008() {
	int n;
	cin >> n;

	divNum(n);

	return 0;
}