#include <iostream>
using namespace std;

int main668() {
	char arrA[5], arrB[5];
	char ch;
	cin >> ch;

	for (int i = 0; i < 5; i++) {
		arrA[i] = ch + i;
		arrB[i] = ch - i;
		cout << arrA[i] ;
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << arrB[i];
	}

	return 0;
}