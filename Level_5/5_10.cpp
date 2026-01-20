#include <iostream>
using namespace std;

int arr2[4];

int main50() {
	
	for (int i = 0; i < 4; i++) {
		cin >> arr2[i];
	}

	for (int i = 3; i >=0; i--) {
		cout << arr2[i];
	}

	return 0;
}