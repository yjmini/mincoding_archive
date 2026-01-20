#include <iostream>
using namespace std;

int main513() {
	int arr[11] = { 3, 4, 1, 5, 8, 1, 7, 7, 3, 6, 9 };

	int n;
	cin >> n;

	for (int i = 0; i < 11; i += n) {
		cout << arr[i] << " ";
	}

	return 0;
}