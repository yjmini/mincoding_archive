#include <iostream>
using namespace std;

int main57() {
	int arr[6];
	int n;

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	cin >> n;

	for (int i = 3; i < 6; i++) {
		arr[i] = n + i - 3;
	}

	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}