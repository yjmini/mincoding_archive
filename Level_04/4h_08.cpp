#include <iostream>
using namespace std;

int main408() {
	int arr[6];
	int a;
	cin >> a;

	for (int i = 0; i < 6; i++) {
		arr[i] = a + i;
		cout << arr[i] << endl;
	}

	return 0;
}