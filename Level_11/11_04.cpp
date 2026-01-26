#include <iostream>
using namespace std;

int main1104() {
	char a, b, c;
	cin >> a >> b >> c;

	char *x = &a;
	(*x)++;
	char *y = &b;
	(*y)++;
	char *z = &c;
	(*z)++;

	cout << *x << " " << *y << " " << *z;

	return 0;
}
