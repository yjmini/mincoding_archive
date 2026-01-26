#include <iostream>
using namespace std;

int arr[6];

void PrintAll() {
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << endl;
	}
}

int main511() {
	int a;
	cin >> a;

	for (int i = 0; i < 6; i++) {
		arr[i] = a + i;
	}
	PrintAll();
	return 0;
}