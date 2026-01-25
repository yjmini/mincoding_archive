#include <iostream>
using namespace std;

int main903() {
	char arr[6] = { 'A','F','G','A','B','C' };
	char a, b;
	cin >> a >> b;
	bool isA = false;
	bool isB = false;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == a) {
			isA = true;
		}
		if (arr[i] == b) {
			isB = true;
		}
	}

	if (isA == true && isB == true) {
		cout << "와2개";
	}
	else if (isA == true || isB == true) {
		cout << "오1개";
	}
	else {
		cout << "우0개";
	}

	return 0;
}