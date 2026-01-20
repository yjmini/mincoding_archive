#include <iostream>
using namespace std;

int main48() {
	int n;
	cin >> n;

	if (n > 5) {
		for (int i = 1; i <= 10; i++) {
			cout << i << endl;
		}
	}
	else {
		for (int i = 5; i >= 1; i--) {
			cout << i << endl;
		}
	}

	return 0;
}