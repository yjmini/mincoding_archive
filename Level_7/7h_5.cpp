#include <iostream>
using namespace std;

int main775() {
	char arr[3];
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];

		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			cnt++;
		}
	}

	if (cnt == 3) {
		cout << "풍족하다";
	}
	else if (cnt >= 1) {
		cout << "적절하다";
	}
	else {
		cout << "부족하다";
	}

	return 0;
}