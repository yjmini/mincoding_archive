#include <iostream>
using namespace std;

int main559() {
	int arr[5];
	int a, b;
	cin >> a >> b;
	arr[0] = a;

	for (int i = 0; i < 5; i++) {
		if (i == 0) {
		}
		else {
			arr[i] = arr[i - 1] + b;
		}

		cout << arr[i] << " ";
	}

	return 0;
}