#include <iostream>
using namespace std;

int main442() {
	int n; 
	cin >> n;

	if (n != 3) {
		cout << "3이 아니다" << endl;
	}
	if (n != 5) {
		cout << "5가 아니다" << endl;
	}
	if (n > 1 && n < 10) {
		for (int i = 5; i >= 1; i--) {
			cout << i << endl;
		}
	}

	return 0;
}