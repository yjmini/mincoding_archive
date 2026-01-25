#include <iostream>
using namespace std;

int n;
int arr[3][3];

void input() {
	cin >> n;
}

void process() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = n + 3 * i + j;
		}
	}
}

void output() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main711() {
	input();
	process();
	output();

	return 0;
}