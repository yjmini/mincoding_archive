#include <iostream>
using namespace std;

char getChar() {
	char a, b;
	cin >> a >> b;

	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

int main1004() {
	cout << getChar();

	return 0;
}
