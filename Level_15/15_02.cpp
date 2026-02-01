#include <iostream>
using namespace std;

int main1502() {
	int n;
	cin >> n;

	int a, b, c, d;

	d = n % 10;
	n = n / 10;

	c = n % 10;
	n = n / 10;

	b = n % 10;
	n = n / 10;

	a = n % 10;
	n = n / 10;

	cout << "숫자" << a << endl;
	cout << "숫자" << b << endl;
	cout << "숫자" << c << endl;
	cout << "숫자" << d << endl;

	return 0;
}
