#include <iostream>
using namespace std;

int chicken() {
	int n;
	cin >> n;
	return n + 10;
}

char coke() {
	char ch;
	cin >> ch;
	return ch;
}

void KFC() {
	int a = chicken();
	char b = coke();
	cout << a << b;
}



int main1003() {
	KFC();

	return 0;
}