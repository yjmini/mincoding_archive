#include <iostream>
using namespace std;

char arr[3] = { 'A', 'B', 'C' };

void KFC9() {
	for (int i = 0; i < 3; i++) {
		cout << arr[i];
	}
	cout << endl;
}

int main59() {
	int n; 
	cin >> n;

	for (int i = 0; i < n; i++) {
		KFC9();
	}
	return 0;
}