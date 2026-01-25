#include <iostream>
using namespace std;

int main708() {
	int arr[3][3] = { {3, 4, 1},{2, 1, 4},{3, 3, 0} };
	int odd=0, even=0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] % 2 == 0) {
				even++;
			}
			else {
				odd++;
			}
		}
	}

	cout << "짝수 : " << even << endl;
	cout << "홀수 : " << odd << endl;

	return 0;
}