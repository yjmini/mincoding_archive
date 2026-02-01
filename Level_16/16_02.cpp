#include <iostream>
using namespace std;

int main1602() {
	char arr[4][4] = { {'A','B','K','T'},
		{'K', 'F','C','F'},
		{'B','B','Q','Q'}, {'T','P','Z','F'} };

	int cnt = 0;
	char a, b;
	cin >> a >> b;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == a || arr[i][j] == b) {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}