#include <iostream>
using namespace std;

int main22005() {
	int map[3][6] = {
		3,5,4,2,2,3,
		1,3,3,3,4,2,
		5,4,4,2,3,5
	};
	char price[5] = { 'T','P','G','K','C' };

	char ch;
	int n;
	cin >> ch >> n;

	int k = map[ch - 65][n - 1];
	cout << price[k - 1];

	return 0;
}