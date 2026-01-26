#include <iostream>
using namespace std;

int main710() {
	char ch; 
	cin >> ch;
	char arr[4][4];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = ch;
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}