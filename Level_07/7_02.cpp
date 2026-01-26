#include <iostream>
using namespace std;

int main702() {
	int a, b;
	cin >> a >> b;

	if (b > a) {
		int temp;
		temp = a;
		a = b;
		b = temp;
	}

	if ((a - b) % 2 == 0) {
		cout << "짝사랑만";
	}
	else
	{
		cout << "고백한다";
	}

	return 0;
}
