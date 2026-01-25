#include <iostream>
using namespace std;

int main998() {
	int n;
	cin >> n;

	if (n % 2 == 1) {
		int a;
		cin >> a;
		for (int i = 1; i <= a; i++)
		{
			cout << i;
		}
	}
	else {
		char ch;
		cin >> ch;
		for (int i = 0; i < 7; i++)
		{
			cout << ch;
		}
	}


	return 0;
}