#include <iostream>
using namespace std;

char change(char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		return (ch - 'A' + 'a');
	}
	else if (ch >= 'a' && ch <= 'z') {
		return (ch - 'a' + 'A');
	}
}

char a, b;

int main667() {
	
	cin >> a >> b;

	cout << change(a) << " " << change(b);
	

	return 0;
}