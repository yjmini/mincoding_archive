#include <iostream>
using namespace std;

void KFC1();
void MC1();

int main54() {

	int a;
	cin >> a;

	if (a == 1) {
		KFC1();
	}
	else if (a == 2) {
		MC1();
	}
	
	return 0;
}

void KFC1() {
	cout << "KFC입니다";
}

void MC1() {
	cout << "MC입니다";
}