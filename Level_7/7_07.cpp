#include <iostream>
using namespace std;

int main707() {
	int a, b, c;
	int max, min;
	cin >> a >> b >> c;

	if (a >= b && a >= c) {
		max = a;
	}
	else if (b >= a && b >= c) {
		max = b;
	}
	else {
		max = c;
	}

	if (a <= b && a <= c) {
		min = a;
	}
	else if (b <= a && b <= c) {
		min = b;
	}if (c <= a && c <= b) {
		min = c;
	}

	cout << "MAX=" << max << endl;
	cout << "MIN=" << min << endl;

	return 0;
}