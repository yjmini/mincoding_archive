#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	if (num == 1) {
		cout << 21 << endl;
	}
	else if (num == 2 || num == 3 || num == 4) {
		cout << 2 << endl;
	}
	else {
		cout << 0 << endl;
	}

	return 0;
}