#include <iostream>
using namespace std;

int main410() {
	int arr[6];
	int n;
	cin >> n;

	for (int i = 0; i < 6; i++) {
		arr[i] = n - i;
	}
	cout << arr[2];

	return 0;
}