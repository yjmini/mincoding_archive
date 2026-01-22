#include <iostream>
using namespace std;

int main705() {
	int n;
	cin >> n;

	if (n >= 80) {
		cout << "수";
	}
	else if (n >= 70) {
		cout << "우";
	}
	else if (n >= 60) {
		cout << "미";
	}
	else {
		cout << "재시도";
	}

	return 0;
}