#include <iostream>
using namespace std;

int main666() {
	char arr[5];
	int cnt = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] >= '0' && arr[i] <= '9') {
			cnt++;
		}
	}

	if (cnt != 0) {
		cout << "숫자" << cnt << "개발견";

	}
	else {
		cout << "숫자미발견";
	}
	
	return 0;
}