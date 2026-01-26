#include <iostream>
using namespace std;

int one() {
	int a;
	cin >> a;
	return a;
}

char two() {
	char b;
	cin >> b;
	return b;
}

int main1001() {
	int a = one();
	char b = two();

	cout << a << b;

	return 0;
}