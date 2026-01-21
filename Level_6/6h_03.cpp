#include <iostream>
using namespace std;


int main663() {
	int arrA[5], arrB[5];

	for (int i = 0; i < 5; i++) {
		cin >> arrA[i];
		arrB[i] = arrA[i];
		cout << arrA[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		
		cout << arrB[i] <<" ";
	}


	return 0;
}