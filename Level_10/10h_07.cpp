#include <iostream>
using namespace std;

char aToZ() {
	char ch;
	cin >> ch;

	if (ch - 'A' <= 13) {
		return 'A';
	}
	else {
		return 'Z';
	}
}

int main10007() {
	cout << aToZ();

	return 0;
}