#include <iostream>
using namespace std;

void starBox() {
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 1) {
			cout << i << " ";
		}
	}
}

void macDoll() {
	for (char i = 'H'; i >= 'A'; i--)
	{
		cout << i << " ";
	}
}

void copyBean() {
	for (int i = -5; i <= 5; i++)
	{
		cout << i << " ";
	}
}

int main() {
	int n;
	cin >> n;

	if (n >= 3500 && n <= 5000) {
		starBox();
	}
	else if (n>=2500 && n<=3500)
	{
		macDoll();
	}
	else
	{
		copyBean();
	}

	return 0;
}