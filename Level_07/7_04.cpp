#include <iostream>
using namespace std;

int main704() {
	int arr[5];
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] >= 3 && arr[i] <= 7) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}