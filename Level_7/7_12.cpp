#include <iostream>
using namespace std;

void BBQ(int n) {
	if (n > 0 && n < 5) {
		cout << "초기값";
	}
	else if (n > 6 && n < 10) {
		cout << "중간값";
	}
	else {
		cout << "알수없는값";
	}
}

int main712() {
	int n; 
	cin >> n;

	if (n == 3 || n == 5 || n == 7) {
		for (int i = 1; i <= 10; i++) {
			cout << i;
		}
	}
	else if (n == 0 || n == 8) {
		for (int i = 10; i >= 1; i--) {
			cout << i;
		}
	}
	else {
		BBQ(n);
	}

	return 0;
}