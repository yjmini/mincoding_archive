#include <iostream>
using namespace std;

void KFC552() {
	cout << "KFC" << endl;
}

void BBQ552() {
	cout << "BBQ" << endl;
}

int main552() {
	char ch;
	cin >> ch;

	if (ch == 'B') {
		KFC552();
		BBQ552();
	}
	else if (ch == 'b') {
		BBQ552();
	}
	else if (ch == '7') {
		KFC552();
	}

	return 0;
}