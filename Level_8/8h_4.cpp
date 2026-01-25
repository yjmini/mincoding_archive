#include <iostream>
using namespace std;

int main884() {
	char arr[17];
	char a, b, c;
	cin >> a >> b >> c;

	for (int i = 0; i < 17; i++)
	{
		if (i <= 6) {
			arr[i] = a;
		}
		else if (i <= 12) {
			arr[i] = b;
		}
		else {
			arr[i] = c;
		}
	}

	for (int i = 16; i >= 0; i--) {
		cout << arr[i];
	}

	return 0;
}