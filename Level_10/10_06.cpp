#include <iostream>
using namespace std;

void printData(int value) {
	cout << value << endl;
}

void odd(int value) {
	printData(value - 10);
}

void even(int value) {
	printData(value * 2);
}

int main1006() {
	int a, b;
	cin >> a >> b;

	if ((a / b) % 2 == 1) {
		odd(a / b);
	}
	else {
		even(a / b);
	}

	printData(a + b);
	
	return 0;
}