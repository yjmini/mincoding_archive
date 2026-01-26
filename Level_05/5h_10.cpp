#include <iostream>
using namespace std;

int main510() {
	int arr[6];
	int n;
	cin >> n;

	for (int i = 0; i < 6; i++) {
		if (i == 0) {
			arr[0] = n;
		}
		else {
			arr[i] = arr[i - 1] + n;
		}
		cout << arr[i] << " ";
	}

	return 0;
}