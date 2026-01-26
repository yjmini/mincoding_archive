#include <iostream>
using namespace std;

int main10012(){
	int n;
	cin >> n;

	if (n % 3 == 0) {
		cout << 7;
	}
	else if (n % 3 == 1) {
		cout << 35;
	}
	else {
		cout << 50;
	}

	return 0;
}