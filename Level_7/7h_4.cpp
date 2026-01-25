#include <iostream>
using namespace std;

int main774() {
	char arr[3][5];
	char ch;
	cin >> ch;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = ch + 5 * i + j;
		}
	}

	cout << (char)(arr[2][2] - 'A' + 'a');

	return 0;
}