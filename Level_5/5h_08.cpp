#include <iostream>
using namespace std;

int main558() {
	int arr[6];
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 3; i++) {
		arr[i] = a + i;
		arr[5 - i] = b - i;
	}

	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}