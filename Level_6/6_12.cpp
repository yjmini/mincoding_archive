#include <iostream>
using namespace std;

char flag, a, b, c;

int main612() {
	cin >> a >> b >> c;

	if (a == 'A' && b == 'B'&&c == 'C') {
		flag = 1;
	}

	if (flag == 1) {
		cout << "ABC를찾았다";
	}
	else {
		cout << "못찾았다";
	}

	return 0;
}