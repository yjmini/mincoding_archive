#include <iostream>
using namespace std;

int main15010() {
	char arr[3][6] = {
		"FRQWT", "GASYQ", "ASADB"
	};

	int n;
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i][n];
	}

	return 0;
}