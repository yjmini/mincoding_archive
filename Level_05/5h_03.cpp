#include <iostream>
using namespace std;


int main553() {
	int arrA[5], arrB[5];
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 5; i++) {
		arrA[i] = a;
		arrB[i] = b;
		cout << arrA[i];
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << arrB[i];
	}


	return 0;
}