#include <iostream>
using namespace std;

int main772() {
	int arr[6] = { 0 };
	int a, b, c;

	cin >> a >> b >> c;

	arr[a] = 1;
	arr[b] = 1;
	arr[c] = 1;

	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}