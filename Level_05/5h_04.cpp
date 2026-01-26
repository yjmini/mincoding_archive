#include <iostream>
using namespace std;

int main554() {
	int arr[5];
	int n;
	cin >> n;


	for (int i = 0; i < 5; i++) {
		arr[i] = n - i;
		cout << arr[i];
	}
	return 0;
}