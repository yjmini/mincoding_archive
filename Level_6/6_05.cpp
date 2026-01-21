#include <iostream>
using namespace std;


int main605() {
	char arr[4] = { 'B', 'T', 'K', 'A' };

	int n;
	cin >> n;
	if (n != 0) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 4; j++) {
				cout << arr[j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << 0;
	}


	return 0;
}